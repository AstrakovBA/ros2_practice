#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_custom_interface.msg import Numbers


class NumberPublisherNode(Node):
    def __init__(self):
        super().__init__('number_publisher')
        self.publisher_ = self.create_publisher(Numbers, 'numbers_topic', 10)
        self.get_logger().info('Number Publisher Node запущена!')
        self.publish_numbers()

    def publish_numbers(self):
        """
        Функция для чтения чисел из input() и публикации их в топик.
        """
        while rclpy.ok():
            try:
                user_input = input("Введите два числа (например, '5 10') или '0 0' для отмены задачи: ").strip()
                if user_input.lower() == 'q':
                    self.get_logger().info('Завершение работы.')
                    break

                # Парсим ввод пользователя
                a, b = map(int, user_input.split())
                msg = Numbers()
                msg.a = a
                msg.b = b

                # Публикуем сообщение
                self.publisher_.publish(msg)
                if a == 0 and b == 0:
                    self.get_logger().info("Опубликована команда отмены задачи.")
                else:
                    self.get_logger().info(f'Опубликованы числа: a={a}, b={b}')
            except ValueError:
                self.get_logger().warn("Некорректный ввод! Попробуйте снова.")


def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisherNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

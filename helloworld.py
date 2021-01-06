# class Restaurant():
#     def __init__(self, restaurant_name, cuisine_type):
#         self.restaurant_name = restaurant_name
#         self.cuisine_type = cuisine_type

#     def describe_restaurant(self):
#         print("the resturant name is " + self.restaurant_name)
#         print("the cuisine_type is " + self.cuisine_type)

#     def open_restaurant(self):
#         print("the restaurant is openning")


# if __name__ == "__main__":
#     restaurant1 = Restaurant("starbac", "sweet, hot, beautiful!")
#     restaurant2 = Restaurant("catshit", "catshit is black!")
#     restaurant3 = Restaurant("happylemo", "happylemo is orange!")
#     # print(restaurant.restaurant_name)
#     # print(restaurant.cuisine_type)
#     # restaurant.describe_restaurant()
#     # restaurant.open_restaurant()
#     restaurant1.describe_restaurant()
#     restaurant2.describe_restaurant()
#     restaurant3.describe_restaurant()


class User():
    def __init__(self, first_name, last_name, age, sex):
        self.first_name = first_name
        self.last_name = last_name
        self.age = age
        self.sex = sex

    def describe_user(self):
        print("the " + self.first_name + " " + self.last_name + "'s age is "
              + self.age + " and is a " + self.sex)

    def greet_user(self):
        print("hello, " + self.first_name + " " + self.last_name +
              ", have a good day!")

    def test(self, s):
        print(s[0:5])

if __name__ == "__main__":
    user1 = User("zhang", "jianbo", "25", "man")
    user2 = User("yao", "hui", "25", "woman")
    user1.describe_user()
    user2.describe_user()
    user1.greet_user()
    user2.greet_user()
    user1.test("helloworld")
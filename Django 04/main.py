class Character:
    def __init__(self, name, health, damage):
        self.name = name
        self.health = health
        self.damage = damage

    def attack (self, target):
        target.health -= self.damage

    def __str__(self):
        return f" Name : {self.name} \n Damage : {self.damage} \n Health : {self.health}"

    def __bool__(self):
        if self.health <= 0:
            print("Character is dead")
            return False
        else:
            print("Character is Alive ")
            return True

    def __add__(self, other):
        return [self, other]

    def __lt__(self, other):
        print(f"{self.name} have less health than {other.name}")
        return self.health < other.health

    def __eq__(self, other):
        print(f"{self.name} have equal health with {other.name}")
        return self.health == other.health

    def __len__(self):
        return f"Health is {self.health}"

class Warrior (Character):
    def __init__(self):
        super().__init__("Warrior",100,50)

    def attack(self, target):
        super().attack(target)
        print("Sword in action")



class Mage ( Character):
    def __init__(self):
        super().__init__("Mage",75,95)

    def attack(self, target):
        super().attack(target)
        print("Thunders is summoned")



class Archer (Character):
    def __init__(self):
        super().__init__("Archer", 70,70)

    def attack(self, target):
        super().attack(target)
        print("Arrow on its way")



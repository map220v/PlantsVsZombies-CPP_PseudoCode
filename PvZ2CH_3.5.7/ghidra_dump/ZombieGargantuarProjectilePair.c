// Class: ZombieGargantuarProjectilePair


/* ZombieGargantuarProjectilePair::ZombieGargantuarProjectilePair(ZombieGargantuarProjectilePair
   const&) */

void __thiscall
ZombieGargantuarProjectilePair::ZombieGargantuarProjectilePair
          (ZombieGargantuarProjectilePair *this,ZombieGargantuarProjectilePair *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8),(vector *)(param_1 + 8));
  return;
}


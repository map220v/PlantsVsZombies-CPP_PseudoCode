// Class: LevelGem


/* LevelGem::LevelGem() */

void __thiscall LevelGem::LevelGem(LevelGem *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 8));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::string::append((string *)(this + 8),"",in_x2);
  return;
}


/* LevelGem::LevelGem(LevelGem&&) */

void __thiscall LevelGem::LevelGem(LevelGem *this,LevelGem *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  FUN_05474148(this + 8,param_1 + 8);
  return;
}


// Class: stMiniGame_rank


/* stMiniGame_rank::stMiniGame_rank() */

void __thiscall stMiniGame_rank::stMiniGame_rank(stMiniGame_rank *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* stMiniGame_rank::~stMiniGame_rank() */

void __thiscall stMiniGame_rank::~stMiniGame_rank(stMiniGame_rank *this)

{
  std::vector<stMiniGame_Bonus,std::allocator<stMiniGame_Bonus>>::~vector
            ((vector<stMiniGame_Bonus,std::allocator<stMiniGame_Bonus>> *)(this + 8));
  return;
}


/* stMiniGame_rank::stMiniGame_rank(stMiniGame_rank const&) */

void __thiscall stMiniGame_rank::stMiniGame_rank(stMiniGame_rank *this,stMiniGame_rank *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<stMiniGame_Bonus,std::allocator<stMiniGame_Bonus>>::vector
            ((vector<stMiniGame_Bonus,std::allocator<stMiniGame_Bonus>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* stMiniGame_rank::TEMPNAMEPLACEHOLDERVALUE(stMiniGame_rank const&) */

stMiniGame_rank * __thiscall
stMiniGame_rank::operator=(stMiniGame_rank *this,stMiniGame_rank *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<stMiniGame_Bonus,std::allocator<stMiniGame_Bonus>>::operator=
            ((vector<stMiniGame_Bonus,std::allocator<stMiniGame_Bonus>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}


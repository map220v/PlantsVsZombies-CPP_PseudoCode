// Class: TitleStatus


/* TitleStatus::~TitleStatus() */

void __thiscall TitleStatus::~TitleStatus(TitleStatus *this)

{
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0x48));
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0x28));
  return;
}


/* TitleStatus::TitleStatus(TitleStatus const&) */

void __thiscall TitleStatus::TitleStatus(TitleStatus *this,TitleStatus *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TitleStatus TVar8;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  TVar8 = param_1[0x18];
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar5;
  this[0x18] = TVar8;
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar6;
  *(undefined4 *)(this + 0x20) = uVar7;
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  uVar1 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = uVar1;
  return;
}


/* TitleStatus::TitleStatus() */

void __thiscall TitleStatus::TitleStatus(TitleStatus *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (TitleStatus)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  *(undefined4 *)(this + 0x40) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  return;
}


/* TitleStatus::TEMPNAMEPLACEHOLDERVALUE(TitleStatus const&) */

TitleStatus * __thiscall TitleStatus::operator=(TitleStatus *this,TitleStatus *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TitleStatus TVar8;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  TVar8 = param_1[0x18];
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar5;
  this[0x18] = TVar8;
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar6;
  *(undefined4 *)(this + 0x20) = uVar7;
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::operator=
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::operator=
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  uVar1 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = uVar1;
  return this;
}


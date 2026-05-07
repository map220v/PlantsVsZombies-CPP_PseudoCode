// Class: NewPVPZombieLevelUpData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPZombieLevelUpData::NewPVPZombieLevelUpData() */

void __thiscall NewPVPZombieLevelUpData::NewPVPZombieLevelUpData(NewPVPZombieLevelUpData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0;
  std::string::string((string *)(this + 8),"");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPZombieLevelUpData::~NewPVPZombieLevelUpData() */

void __thiscall NewPVPZombieLevelUpData::~NewPVPZombieLevelUpData(NewPVPZombieLevelUpData *this)

{
  std::vector<NewPVPZombieLevelUpValueData,std::allocator<NewPVPZombieLevelUpValueData>>::~vector
            ((vector<NewPVPZombieLevelUpValueData,std::allocator<NewPVPZombieLevelUpValueData>> *)
             (this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* NewPVPZombieLevelUpData::NewPVPZombieLevelUpData(NewPVPZombieLevelUpData const&) */

void __thiscall
NewPVPZombieLevelUpData::NewPVPZombieLevelUpData
          (NewPVPZombieLevelUpData *this,NewPVPZombieLevelUpData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05475d88(this + 8,param_1 + 8);
  std::vector<NewPVPZombieLevelUpValueData,std::allocator<NewPVPZombieLevelUpValueData>>::vector
            ((vector<NewPVPZombieLevelUpValueData,std::allocator<NewPVPZombieLevelUpValueData>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* NewPVPZombieLevelUpData::TEMPNAMEPLACEHOLDERVALUE(NewPVPZombieLevelUpData const&) */

NewPVPZombieLevelUpData * __thiscall
NewPVPZombieLevelUpData::operator=(NewPVPZombieLevelUpData *this,NewPVPZombieLevelUpData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  std::vector<NewPVPZombieLevelUpValueData,std::allocator<NewPVPZombieLevelUpValueData>>::operator=
            ((vector<NewPVPZombieLevelUpValueData,std::allocator<NewPVPZombieLevelUpValueData>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return this;
}


/* NewPVPZombieLevelUpData::NewPVPZombieLevelUpData(NewPVPZombieLevelUpData&&) */

void __thiscall
NewPVPZombieLevelUpData::NewPVPZombieLevelUpData
          (NewPVPZombieLevelUpData *this,NewPVPZombieLevelUpData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05474148(this + 8,param_1 + 8);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


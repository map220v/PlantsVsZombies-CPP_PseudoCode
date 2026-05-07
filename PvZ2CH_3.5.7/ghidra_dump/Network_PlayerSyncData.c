// Class: Network_PlayerSyncData


/* Network_PlayerSyncData::~Network_PlayerSyncData() */

void __thiscall Network_PlayerSyncData::~Network_PlayerSyncData(Network_PlayerSyncData *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x60));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Network_PlayerSyncData::Network_PlayerSyncData() */

void __thiscall Network_PlayerSyncData::Network_PlayerSyncData(Network_PlayerSyncData *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  std::string::string((string *)(this + 8),"");
  nop();
  std::string::string((string *)(this + 0x10),"");
  nop();
  *(undefined4 *)(this + 0x18) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  *(undefined4 *)(this + 0x78) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Network_PlayerSyncData::Network_PlayerSyncData(Network_PlayerSyncData const&) */

void __thiscall
Network_PlayerSyncData::Network_PlayerSyncData
          (Network_PlayerSyncData *this,Network_PlayerSyncData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x38),(vector *)(param_1 + 0x38));
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(this + 0x54) = uVar2;
  *(undefined4 *)(this + 0x58) = uVar3;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x60),(vector *)(param_1 + 0x60));
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x78) = uVar1;
  *(undefined4 *)(this + 0x7c) = uVar2;
  return;
}


/* Network_PlayerSyncData::TEMPNAMEPLACEHOLDERVALUE(Network_PlayerSyncData const&) */

Network_PlayerSyncData * __thiscall
Network_PlayerSyncData::operator=(Network_PlayerSyncData *this,Network_PlayerSyncData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x38),(vector *)(param_1 + 0x38));
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(this + 0x54) = uVar2;
  *(undefined4 *)(this + 0x58) = uVar3;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x60),(vector *)(param_1 + 0x60));
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x78) = uVar1;
  *(undefined4 *)(this + 0x7c) = uVar2;
  return this;
}


/* Network_PlayerSyncData::Network_PlayerSyncData(Network_PlayerSyncData&&) */

void __thiscall
Network_PlayerSyncData::Network_PlayerSyncData
          (Network_PlayerSyncData *this,Network_PlayerSyncData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x38),(vector *)(param_1 + 0x38));
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(this + 0x54) = uVar2;
  *(undefined4 *)(this + 0x58) = uVar3;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x60),(vector *)(param_1 + 0x60));
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x78) = uVar1;
  *(undefined4 *)(this + 0x7c) = uVar2;
  return;
}


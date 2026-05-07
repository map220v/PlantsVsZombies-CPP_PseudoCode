// Class: ArcadePropertySheetHelpers::ArcadeLevelPack


/* ArcadePropertySheetHelpers::ArcadeLevelPack::~ArcadeLevelPack() */

void __thiscall ArcadePropertySheetHelpers::ArcadeLevelPack::~ArcadeLevelPack(ArcadeLevelPack *this)

{
  PakRecord::~PakRecord((PakRecord *)(this + 0x58));
  std::
  vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
  ::~vector((vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
             *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack(ArcadePropertySheetHelpers::ArcadeLevelPack
   const&) */

void __thiscall
ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack
          (ArcadeLevelPack *this,ArcadeLevelPack *param_1)

{
  FUN_05475d88();
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8),(vector *)(param_1 + 8));
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  std::
  vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
  ::vector((vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
            *)(this + 0x40),(vector *)(param_1 + 0x40));
  GriditemBarrelZombieDes::GriditemBarrelZombieDes
            ((GriditemBarrelZombieDes *)(this + 0x58),(GriditemBarrelZombieDes *)(param_1 + 0x58));
  return;
}


/* ArcadePropertySheetHelpers::ArcadeLevelPack::TEMPNAMEPLACEHOLDERVALUE(ArcadePropertySheetHelpers::ArcadeLevelPack
   const&) */

ArcadeLevelPack * __thiscall
ArcadePropertySheetHelpers::ArcadeLevelPack::operator=
          (ArcadeLevelPack *this,ArcadeLevelPack *param_1)

{
  thunk_FUN_05475e00();
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 8),(vector *)(param_1 + 8));
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  std::
  vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
  ::operator=((vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
               *)(this + 0x40),(vector *)(param_1 + 0x40));
  GriditemBarrelZombieDes::operator=
            ((GriditemBarrelZombieDes *)(this + 0x58),(GriditemBarrelZombieDes *)(param_1 + 0x58));
  return this;
}


/* ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack() */

void __thiscall ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack(ArcadeLevelPack *this)

{
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  ArcadeReward::ArcadeReward((ArcadeReward *)(this + 0x58));
  return;
}


/* ArcadePropertySheetHelpers::ArcadeLevelPack::GetLevelIndexByID(std::string const&) const */

int __thiscall
ArcadePropertySheetHelpers::ArcadeLevelPack::GetLevelIndexByID
          (ArcadeLevelPack *this,string *param_1)

{
  int iVar1;
  
  iVar1 = IndexOf<ArcadePropertySheetHelpers::ArcadeLevel>((vector *)(this + 0x40),param_1);
  return iVar1;
}


/* ArcadePropertySheetHelpers::ArcadeLevelPack::ContainsLevelID(std::string const&) const */

bool __thiscall
ArcadePropertySheetHelpers::ArcadeLevelPack::ContainsLevelID(ArcadeLevelPack *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = ContainsID<ArcadePropertySheetHelpers::ArcadeLevel>((vector *)(this + 0x40),param_1);
  return bVar1;
}


/* ArcadePropertySheetHelpers::ArcadeLevelPack::GetLevelByID(std::string const&) const */

void __thiscall
ArcadePropertySheetHelpers::ArcadeLevelPack::GetLevelByID(ArcadeLevelPack *this,string *param_1)

{
  GetByID<ArcadePropertySheetHelpers::ArcadeLevel>((vector *)(this + 0x40),param_1);
  return;
}


/* ArcadePropertySheetHelpers::ArcadeLevelPack::GetFirstLevel() const */

undefined * __thiscall
ArcadePropertySheetHelpers::ArcadeLevelPack::GetFirstLevel(ArcadeLevelPack *this)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  
  cVar1 = std::
          vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
          ::empty((vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
                   *)(this + 0x40));
  if (cVar1 == '\0') {
    puVar3 = (undefined *)
             std::
             vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
             ::front((vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
                      *)(this + 0x40));
    return puVar3;
  }
  if (((DAT_06b733d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b733d0), iVar2 != 0)) {
    PakFileDesc::PakFileDesc((PakFileDesc *)&DAT_06b734b0);
    __cxa_guard_release(&DAT_06b733d0);
    __cxa_atexit(std::pair<std::string_const,Sexy::PILifeValueTable>::~pair,&DAT_06b734b0,
                 &DAT_06a88000);
    return &DAT_06b734b0;
  }
  return &DAT_06b734b0;
}


/* ArcadePropertySheetHelpers::ArcadeLevelPack::IsLevelLastInPack(std::string const&) const */

undefined8 __thiscall
ArcadePropertySheetHelpers::ArcadeLevelPack::IsLevelLastInPack
          (ArcadeLevelPack *this,string *param_1)

{
  char cVar1;
  string *psVar2;
  undefined8 uVar3;
  
  cVar1 = std::
          vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
          ::empty((vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
                   *)(this + 0x40));
  if (cVar1 != '\0') {
    return 0;
  }
  psVar2 = (string *)
           std::
           vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
           ::back((vector<ArcadePropertySheetHelpers::ArcadeLevel,std::allocator<ArcadePropertySheetHelpers::ArcadeLevel>>
                   *)(this + 0x40));
  uVar3 = std::operator==(psVar2,param_1);
  return uVar3;
}


/* ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack(ArcadePropertySheetHelpers::ArcadeLevelPack&&)
    */

void __thiscall
ArcadePropertySheetHelpers::ArcadeLevelPack::ArcadeLevelPack
          (ArcadeLevelPack *this,ArcadeLevelPack *param_1)

{
  FUN_05474148();
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  FUN_05474148(this + 0x30,param_1 + 0x30);
  FUN_05474148(this + 0x38,param_1 + 0x38);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x40),(vector *)(param_1 + 0x40));
  GriditemBarrelZombieDes::GriditemBarrelZombieDes
            ((GriditemBarrelZombieDes *)(this + 0x58),(GriditemBarrelZombieDes *)(param_1 + 0x58));
  return;
}


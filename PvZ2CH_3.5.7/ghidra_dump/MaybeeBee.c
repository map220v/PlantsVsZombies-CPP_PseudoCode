// Class: MaybeeBee


/* MaybeeBee::onDestroy() */

void __thiscall MaybeeBee::onDestroy(MaybeeBee *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* MaybeeBee::onDieFinished(std::string const&) */

void MaybeeBee::onDieFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* MaybeeBee::GetTarget() */

RtWeakPtr<Sexy::SoundResource> * MaybeeBee::GetTarget(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0xb8));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::StaticClassInit() */

void MaybeeBee::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"MaybeeBee");
    (*pcVar2)(plVar1,asStack_10,FUN_04e31b38,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MaybeeBee::StaticGetClass() */

long * MaybeeBee::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"MaybeeBee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MaybeeBee::GetClass() const */

long * MaybeeBee::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"MaybeeBee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::getCollisionName() */

void MaybeeBee::getCollisionName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0xc6) == '\0') {
    __s = "bee_pf02_fly02";
  }
  else {
    __s = "bee_lv5_pf02_fly02";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::isWithinStingRange() */

void __thiscall MaybeeBee::isWithinStingRange(MaybeeBee *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *this_01;
  SexyVector3 *pSVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Vec3 aVStack_38 [16];
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  uVar4 = 0;
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_38,10.0,0.0,0.0);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = Sexy::SexyVector3::operator-(this_01,pSVar1);
  local_14 = uVar4;
  local_10 = uVar5;
  fVar2 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_18,(SexyVector3 *)aVStack_38);
  local_28 = fVar2;
  local_24 = uVar4;
  local_20 = uVar5;
  fVar3 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3 <= 700.0 && 0.0 <= fVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::SetOwner(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall MaybeeBee::SetOwner(MaybeeBee *this,RtWeakPtr *param_2)

{
  bool bVar1;
  RtObject *pRVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb0),param_2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar1 = Sexy::RtObject::IsA<Plant>(pRVar2);
    if (bVar1) {
      pRVar2 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      Sexy::RtObject::Cast<Plant>(pRVar2);
      Plant::GetType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      thunk_FUN_05475e00(this + 0xf0,lVar3 + 8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MaybeeBee::HasTarget() */

char __thiscall MaybeeBee::HasTarget(MaybeeBee *this)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar7;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  if (this_00 ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    return '\0';
  }
  uVar6 = operator|(1,8);
  cVar1 = Zombie::MatchesAny((Zombie *)this_00,uVar6);
  if ((cVar1 == '\0') && (cVar1 = Zombie::IsTargetable((Zombie *)this_00), cVar1 != '\0')) {
    bVar2 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)this_00);
    pSVar7 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    cVar3 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar7);
    bVar4 = RealObject::IsOnOpposingTeam((RealObject *)this_00,(RealObject *)this);
    if (bVar2 < bVar4) {
      if (*(code **)(*(long *)this_00 + 0x338) == Zombie::IsSwingingIn) {
        cVar5 = Zombie::IsSwingingIn();
      }
      else {
        cVar5 = (**(code **)(*(long *)this_00 + 0x338))(this_00);
      }
      if ((cVar5 == '\0') && (cVar3 == '\0')) {
        return cVar1;
      }
    }
  }
  else {
    pSVar7 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar7);
    RealObject::IsOnOpposingTeam((RealObject *)this_00,(RealObject *)this);
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::onDraw(Sexy::Graphics*) */

void __thiscall MaybeeBee::onDraw(MaybeeBee *this,Graphics *param_1)

{
  bool bVar1;
  PopAnimRig *this_00;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  uVar2 = FUN_04e2da58(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                       *(undefined4 *)(this + 0x20));
  fVar3 = (float)FUN_04e2dc94(uVar2);
  fVar4 = (float)FUN_04e2dc94(0x42be0000);
  uVar7 = (ulong)*(uint *)(this + 0x1c);
  FUN_04e2da58(*(undefined4 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x20));
  fVar5 = (float)FUN_04e2dc94(uVar7 & 0xffffffff);
  fVar6 = (float)FUN_04e2dc94(0x432a0000);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x10) +
       (float)(int)(((fVar3 - fVar4) - *(float *)(param_1 + 0x20)) * *(float *)(param_1 + 0x18));
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x14) +
       (float)(int)(((fVar5 - fVar6) - *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 0x1c));
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (bVar1) {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    PopAnimRig::Draw(this_00,param_1,aSStack_30);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::getAttackName() */

void MaybeeBee::getAttackName(void)

{
  long in_x0;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"_attack");
  nop();
  if (*(char *)(in_x0 + 0xc4) == '\0') {
    if (*(char *)(in_x0 + 0xc6) == '\0') {
      if (*(char *)(in_x0 + 0xc5) == '\0') {
        FUN_031dcc6c(&DAT_06b9eb88,asStack_10);
      }
      else {
        FUN_031dcc6c(&DAT_06b9eb68,asStack_10);
      }
      goto LAB_04e2eee4;
    }
  }
  else if (*(char *)(in_x0 + 0xc6) == '\0') {
    if (*(char *)(in_x0 + 0xc5) == '\0') {
      FUN_031dcc6c(&DAT_06b9ebf8,asStack_10);
    }
    else {
      std::string::string(in_x8,"bee_charged_pf02_attack");
      nop();
    }
    goto LAB_04e2eee4;
  }
  if (*(char *)(in_x0 + 0xc5) == '\0') {
    std::string::string(in_x8,"bee_attack_lv5");
    nop();
  }
  else {
    std::string::string(in_x8,"bee_lv5_pf02_attack");
    nop();
  }
LAB_04e2eee4:
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::getMoveName() */

void MaybeeBee::getMoveName(void)

{
  long in_x0;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"_fly");
  nop();
  if (*(char *)(in_x0 + 0xc4) == '\0') {
    if (*(char *)(in_x0 + 0xc5) != '\0') {
      if (*(char *)(in_x0 + 0xc6) == '\0') {
        FUN_031dcc6c(&DAT_06b9eb68,asStack_10);
        goto LAB_04e2f040;
      }
LAB_04e2f07c:
      std::string::string(in_x8,"bee_lv5_pf02_fly01");
      nop();
      goto LAB_04e2f040;
    }
    if (*(char *)(in_x0 + 0xc6) == '\0') {
      FUN_031dcc6c(&DAT_06b9eb88,asStack_10);
      goto LAB_04e2f040;
    }
  }
  else {
    if (*(char *)(in_x0 + 0xc6) == '\0') {
      if (*(char *)(in_x0 + 0xc5) == '\0') {
        FUN_031dcc6c(&DAT_06b9ebf8,asStack_10);
      }
      else {
        std::string::string(in_x8,"bee_charged_pf02_fly01");
        nop();
      }
      goto LAB_04e2f040;
    }
    if (*(char *)(in_x0 + 0xc5) != '\0') goto LAB_04e2f07c;
  }
  std::string::string(in_x8,"bee_fly_lv5");
  nop();
LAB_04e2f040:
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MaybeeBee::getIdleName() */

void __thiscall MaybeeBee::getIdleName(MaybeeBee *this)

{
  getMoveName();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::moveTowardTarget() */

void __thiscall MaybeeBee::moveTowardTarget(MaybeeBee *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *this_01;
  SexyVector3 *this_02;
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  Vec3 aVStack_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  uVar2 = 0;
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_68,20.0,0.0,0.0);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
  this_02 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  local_18 = Sexy::SexyVector3::operator-(this_01,this_02);
  local_14 = uVar2;
  local_10 = uVar3;
  local_58 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_18,(SexyVector3 *)aVStack_68);
  fVar4 = *(float *)(this + 0xd4);
  pcVar1 = *(code **)(*(long *)this + 0x78);
  local_54 = uVar2;
  local_50 = uVar3;
  local_48 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_58);
  local_44 = uVar2;
  local_40 = uVar3;
  local_38 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_48,fVar4);
  local_34 = uVar2;
  local_30 = uVar3;
  fVar4 = (float)PVZ_Dt();
  local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,fVar4);
  local_24 = uVar2;
  local_20 = uVar3;
  local_18 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)&local_28);
  local_14 = uVar2;
  local_10 = uVar3;
  (*pcVar1)(this,(SexyVector3 *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::moveOutOfRange() */

void __thiscall MaybeeBee::moveOutOfRange(MaybeeBee *this)

{
  SexyVector3 *this_00;
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Vec3 aVStack_78 [16];
  Vec3 aVStack_68 [16];
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_48;
  float local_44;
  float local_40;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_78,20.0,0.0,0.0);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  fVar2 = *(float *)(this_00 + 4);
  fVar3 = *(float *)(this_00 + 8);
  EATextSquish::Vec3::Vec3(aVStack_68,*(float *)(this + 0xd0),fVar2,fVar3);
  local_18 = Sexy::SexyVector3::operator-((SexyVector3 *)aVStack_68,this_00);
  local_14 = fVar2;
  local_10 = fVar3;
  local_58 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_18,(SexyVector3 *)aVStack_78);
  fVar4 = *(float *)(this + 0xd4);
  pcVar1 = *(code **)(*(long *)this + 0x78);
  local_54 = fVar2;
  local_50 = fVar3;
  local_48 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_58);
  local_44 = fVar2;
  local_40 = fVar3;
  local_38 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_48,fVar4);
  local_34 = fVar2;
  local_30 = fVar3;
  fVar4 = (float)PVZ_Dt();
  local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,fVar4);
  local_24 = fVar2;
  local_20 = fVar3;
  local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)&local_28);
  local_14 = fVar2;
  local_10 = fVar3;
  (*pcVar1)(this,(SexyVector3 *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MaybeeBee::useSmallerRange() */

ulong __thiscall MaybeeBee::useSmallerRange(MaybeeBee *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  bool bVar3;
  RtObject *pRVar4;
  Zombie *this_01;
  Zombie *this_02;
  undefined8 uVar5;
  ulong uVar6;
  
  this_00 = (RtWeakPtr *)(this + 0xb8);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1 == 0) {
LAB_04e2fe84:
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    this_01 = Sexy::RtObject::Cast<Zombie>(pRVar4);
    this_02 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = Zombie::IsSuspended(this_02);
    if (cVar2 == '\0') {
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = Zombie::HasCondition(uVar5,0x55);
      if (cVar2 == '\0') {
        if (this_01 == (Zombie *)0x0) {
          return 0;
        }
        uVar6 = Zombie::IsBoss(this_01);
        return uVar6;
      }
    }
    return 1;
  }
  pRVar4 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  bVar3 = Sexy::RtObject::IsA<ZombieGeneralBase>(pRVar4);
  if (!bVar3) {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar3 = Sexy::RtObject::IsA<ZombiePirateCannon>(pRVar4);
    if (!bVar3) {
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar3 = Sexy::RtObject::IsA<ZombieRomanBallista>(pRVar4);
      if (!bVar3) {
        pRVar4 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        bVar3 = Sexy::RtObject::IsA<ZombieDarkKing>(pRVar4);
        if (!bVar3) {
          pRVar4 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          bVar3 = Sexy::RtObject::IsA<ZombieBeachFisherman>(pRVar4);
          if (!bVar3) goto LAB_04e2fe84;
        }
      }
    }
  }
  pRVar4 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtObject::Cast<Zombie>(pRVar4);
  return (ulong)(uint)bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::shouldStartSting() */

void __thiscall MaybeeBee::shouldStartSting(MaybeeBee *this)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *this_01;
  SexyVector3 *pSVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_38 [4];
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  uVar5 = 0;
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)local_38,20.0,0.0,0.0);
  cVar1 = useSmallerRange(this);
  if (cVar1 != '\0') {
    local_38[0] = 0x41200000;
  }
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = Sexy::SexyVector3::operator-(this_01,pSVar2);
  local_14 = uVar5;
  local_10 = uVar6;
  fVar3 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_18,(SexyVector3 *)local_38);
  local_28 = fVar3;
  local_24 = uVar5;
  local_20 = uVar6;
  fVar4 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4 <= 500.0 && 0.0 <= fVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::getDamageTypeFlags() */

void __thiscall MaybeeBee::getDamageTypeFlags(MaybeeBee *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  RtObject *this_01;
  Zombie *this_02;
  RayEntity *pRVar2;
  undefined8 uVar3;
  Zombie *pZVar4;
  string asStack_60 [8];
  undefined8 local_58;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  Vec3 aVStack_38 [16];
  undefined8 local_28 [2];
  int local_18;
  int local_14;
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0xb8);
  local_8 = ___stack_chk_guard;
  uVar3 = 1;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if ((cVar1 != '\0') && (this[0xc6] != (MaybeeBee)0x0)) {
    uVar3 = 0x80;
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    this_02 = Sexy::RtObject::Cast<Zombie>(this_01);
    std::string::string(asStack_60,"hit");
    nop();
    cVar1 = Zombie::HasCondition(this_02,0x3c);
    if (cVar1 == '\0') {
      pZVar4._0_4_ = (Zombie *)PVZ_EOT();
      uVar3 = 1;
      Zombie::ApplyCondition(pZVar4._0_4_,0,this_02,0x3c,1);
    }
    (**(code **)(*(long *)this + 0xb0))(&local_18,this);
    pRVar2 = GameObject::Create<RayEntity>();
    EATextSquish::Vec3::Vec3(aVStack_38,(float)local_18 - 20.0,(float)local_14 - 124.0,0.0);
    Sexy::Point::Point((Point *)&local_58,0,-10);
    if ((this_02 != (Zombie *)0x0) && (cVar1 = Zombie::IsBoss(this_02), cVar1 != '\0')) {
      FUN_04e2da20(pRVar2 + 0x104);
      Sexy::Point::Point((Point *)local_28,0,100);
      local_58 = local_28[0];
      EATextSquish::Vec3::Vec3((Vec3 *)local_28,(float)local_18 - 20.0,(float)local_14 - 150.0,0.0);
      Sexy::SexyVector3::operator=((SexyVector3 *)aVStack_38,(SexyVector3 *)local_28);
    }
    BoardEntity::PlaceOnBoard((SexyVector3 *)pRVar2);
    std::string::string(asStack_48,"POPANIM_EFFECTS_MAYBEE_BOLT");
    std::string::string(asStack_40,"POPANIM_EFFECTS_MAYBEE_SHOCK");
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_28,(RtWeakPtrBase *)aRStack_50);
    RayEntity::Initialize
              ((RayEntity *)0x0,pRVar2,asStack_48,asStack_40,asStack_60,
               (RtWeakPtr<Sexy::SoundResource> *)local_28,1,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    std::string::~string(asStack_40);
    nop();
    std::string::~string(asStack_48);
    nop();
    Sexy::Point::Point((Point *)local_28,(TPoint *)&local_58);
    RayEntity::SetHitOffset(pRVar2,(RtWeakPtr<Sexy::SoundResource> *)local_28);
    FUN_04e2da30(pRVar2 + 0x102);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_28,(RtWeakPtrBase *)this_00);
    RayEntity::InitiateWithTarget(pRVar2,(RtWeakPtr<Sexy::SoundResource> *)local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    std::string::~string(asStack_60);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* MaybeeBee::MaybeeBee() */

void __thiscall MaybeeBee::MaybeeBee(MaybeeBee *this)

{
  undefined4 uVar1;
  
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_069db8f0;
  *(undefined ***)(this + 0x10) = &PTR__MaybeeBee_069dbad8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  this[0xc4] = (MaybeeBee)0x0;
  *(undefined4 *)(this + 200) = 1;
  this[0xc5] = (MaybeeBee)0x0;
  this[0xc6] = (MaybeeBee)0x0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  Set8BytesTo0(this + 0xf0);
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  uVar1 = PVZ_EOT();
  this[0xc4] = (MaybeeBee)0x0;
  this[0xc5] = (MaybeeBee)0x0;
  *(undefined4 *)(this + 0xc0) = uVar1;
  return;
}


/* MaybeeBee::StaticNew() */

MaybeeBee * MaybeeBee::StaticNew(void)

{
  MaybeeBee *this;
  
  this = ::operator_new(0x138);
  MaybeeBee(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::refreshAnimation() */

void __thiscall MaybeeBee::refreshAnimation(MaybeeBee *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  PopAnimRig *pPVar2;
  string *__n;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) goto switchD_04e31368_default;
  switch(*(undefined4 *)(this + 0xec)) {
  case 1:
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    getIdleName(this);
    goto LAB_04e31494;
  case 2:
    __n = asStack_58;
    std::string::string((string *)aRStack_60,"Plant_MayBee_Bee_Fly_01");
    nop();
    if (this[0xc4] == (MaybeeBee)0x0) {
      if (this[0xc6] != (MaybeeBee)0x0) goto LAB_04e314f8;
      if (this[0xc5] != (MaybeeBee)0x0) {
        std::string::append((string *)aRStack_60,"Plant_MayBee_Bee_Fly_02",(size_t)__n);
        if (this[0xc4] != (MaybeeBee)0x0) goto LAB_04e314f0;
        goto LAB_04e31640;
      }
    }
    else {
LAB_04e314f0:
      if (this[0xc6] == (MaybeeBee)0x0) {
        std::string::append((string *)aRStack_60,"Plant_MayBee_Bee_Fly_Charged_01",(size_t)__n);
LAB_04e31640:
        if (this[0xc6] == (MaybeeBee)0x0) goto LAB_04e31508;
      }
LAB_04e314f8:
      std::string::append((string *)aRStack_60,"Plant_MayBee_Bee_Fly_Charged_02",(size_t)__n);
    }
LAB_04e31508:
    RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_60,0.0);
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    getMoveName();
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    std::string::~string((string *)aRStack_60);
    break;
  case 3:
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    getAttackName();
LAB_04e31494:
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    break;
  case 4:
    std::string::string(asStack_58,"Plant_MayBee_Bee_Die_01");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string(asStack_68,"bee_die");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onDieFinished");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar2,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    break;
  case 5:
    std::string::string(asStack_58,"Plant_MayBee_Bee_Fly_Charged_02");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    getCollisionName();
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
  }
switchD_04e31368_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MaybeeBee::SetIsPlantfooded() */

void __thiscall MaybeeBee::SetIsPlantfooded(MaybeeBee *this)

{
  this[0xc5] = (MaybeeBee)0x1;
  refreshAnimation(this);
  return;
}


/* MaybeeBee::SetPowered() */

void __thiscall MaybeeBee::SetPowered(MaybeeBee *this)

{
  if (this[0xc4] != (MaybeeBee)0x0) {
    return;
  }
  this[0xc4] = (MaybeeBee)0x1;
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(this + 0xdc);
  refreshAnimation(this);
  return;
}


/* MaybeeBee::setState(unsigned int) */

void __thiscall MaybeeBee::setState(MaybeeBee *this,uint param_1)

{
  if (*(uint *)(this + 0xec) != param_1) {
    *(uint *)(this + 0xec) = param_1;
    refreshAnimation(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::onInitialized() */

void __thiscall MaybeeBee::onInitialized(MaybeeBee *this)

{
  PopAnim *pPVar1;
  RtClass *pRVar2;
  TimeChallengeEndLevelUI *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = CachedResourcePtr::operator_cast_to_PopAnim_
                     ((CachedResourcePtr *)POPANIM_EFFECTS_MAYBEE_PROJECTILE);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(pPVar1,pRVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  this_00 = (TimeChallengeEndLevelUI *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<MaybeeBee,void(MaybeeBee::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  setState(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MaybeeBee::SetCollision() */

void __thiscall MaybeeBee::SetCollision(MaybeeBee *this)

{
  setState(this,5);
  return;
}


/* MaybeeBee::SetTarget(Sexy::RtWeakPtr<Zombie>) */

void __thiscall MaybeeBee::SetTarget(MaybeeBee *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb8),param_2);
  setState(this,2);
  return;
}


/* MaybeeBee::Die() */

void __thiscall MaybeeBee::Die(MaybeeBee *this)

{
  setState(this,4);
  return;
}


/* MaybeeBee::~MaybeeBee() */

void __thiscall MaybeeBee::~MaybeeBee(MaybeeBee *this)

{
  *(undefined ***)this = &PTR_GetClass_069db8f0;
  *(undefined ***)(this + 0x10) = &PTR__MaybeeBee_069dbad8;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x120));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0xf8));
  std::string::~string((string *)(this + 0xf0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to MaybeeBee::~MaybeeBee() */

void __thiscall MaybeeBee::~MaybeeBee(MaybeeBee *this)

{
  ~MaybeeBee(this + -0x10);
  return;
}


/* MaybeeBee::~MaybeeBee() */

void __thiscall MaybeeBee::~MaybeeBee(MaybeeBee *this)

{
  ~MaybeeBee(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MaybeeBee::~MaybeeBee() */

void __thiscall MaybeeBee::~MaybeeBee(MaybeeBee *this)

{
  ~MaybeeBee(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::createDamage() */

void MaybeeBee::createDamage(void)

{
  MaybeeBee *in_x0;
  long in_x8;
  float fVar1;
  float fVar2;
  DamageInfo *pDVar3;
  Point aPStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
                    /* WARNING: Load size is inaccurate */
  pDVar3._0_4_ = *(DamageInfo **)(in_x0 + 0xd8);
  local_8 = ___stack_chk_guard;
  getDamageTypeFlags(in_x0);
  Sexy::Point::Point(aPStack_18,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,0.0);
  DamageInfo::DamageInfo(pDVar3._0_4_,local_10,local_c);
  if (in_x0[0xc6] == (MaybeeBee)0x0) {
    fVar2 = *(float *)(in_x0 + 0xc0);
    fVar1 = (float)PVZ_T();
    DamageInfo::AddCondition((DamageInfo *)(fVar2 - fVar1));
    if (0.0 < *(float *)(in_x0 + 0xe8)) {
      *(undefined4 *)(in_x8 + 0x54) = 0x41200000;
      DamageInfo::AddCondition();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::OnAnimCommand(std::string const&, float, std::string const&, std::string const&) */

void MaybeeBee::OnAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  undefined1 *__n;
  code *pcVar4;
  undefined1 auStack_70 [8];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_action");
  if (!bVar1) goto LAB_04e330e0;
  cVar2 = HasTarget((MaybeeBee *)param_1);
  if ((cVar2 == '\0') || (cVar2 = isWithinStingRange((MaybeeBee *)param_1), cVar2 == '\0')) {
    setState((MaybeeBee *)param_1,1);
    goto LAB_04e330e0;
  }
  __n = auStack_70;
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb8));
  pcVar4 = *(code **)(*plVar3 + 0x110);
  createDamage();
  (*pcVar4)(plVar3,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  std::string::string((string *)aDStack_68,"Play_Splat");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aDStack_68,0.0);
  std::string::~string((string *)aDStack_68);
  nop();
  std::string::string((string *)aDStack_68,"Plant_MayBee_Bee_Attack_01");
  nop();
  if (param_1[0xc4] == (string)0x0) {
    if (param_1[0xc6] != (string)0x0) goto LAB_04e331fc;
    if (param_1[0xc5] != (string)0x0) {
      std::string::append((string *)aDStack_68,"Plant_MayBee_Bee_Attack_02",(size_t)__n);
      if (param_1[0xc4] != (string)0x0) goto LAB_04e33228;
      goto LAB_04e331f4;
    }
  }
  else {
LAB_04e33228:
    if (param_1[0xc6] == (string)0x0) {
      std::string::append((string *)aDStack_68,"Plant_MayBee_Bee_Attack_Charged_01",(size_t)__n);
LAB_04e331f4:
      if (param_1[0xc6] == (string)0x0) goto LAB_04e3320c;
    }
LAB_04e331fc:
    std::string::append((string *)aDStack_68,"Plant_MayBee_Bee_Attack_Charged_02",(size_t)__n);
  }
LAB_04e3320c:
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aDStack_68,0.0);
  std::string::~string((string *)aDStack_68);
LAB_04e330e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeBee::updateBee() */

void __thiscall MaybeeBee::updateBee(MaybeeBee *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  PlantMaybeeSubSystem *pPVar6;
  long lVar7;
  undefined8 *puVar8;
  RtWeakPtrBase *pRVar9;
  int *piVar10;
  BoardEntity **ppBVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  BoardEntity *pBVar15;
  float fVar16;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 local_80 [3];
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0xc4] == (MaybeeBee)0x0) ||
     ((*(int *)(this + 200) == 5 && (this[0xc6] == (MaybeeBee)0x0)))) {
    iVar4 = SharkMinion::getRow((SharkMinion *)this);
    iVar5 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    Sexy::Point::Point((Point *)&local_b8,iVar5,iVar4);
    lVar7 = Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)PlantGroup::Plants();
      local_a8 = FUN_04e30108(*puVar8);
      local_a0 = FUN_04e30158(puVar8[1]);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0),
            bVar3) {
        pRVar9 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_b0,pRVar9);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
        Plant::GetType();
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        local_98 = FUN_04e301a8(*(undefined8 *)(lVar7 + 0xf0));
        local_90[0] = FUN_04e301f8(*(undefined8 *)(lVar7 + 0xf8));
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_98,(__normal_iterator *)local_90),
              bVar3) {
          piVar10 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
          iVar4 = *piVar10;
          uVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
          cVar2 = Plant::HasCondition(uVar12,6);
          if (cVar2 != '\0') break;
          uVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
          cVar2 = Plant::HasCondition(uVar12,0x10);
          if (cVar2 != '\0') break;
          uVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
          cVar2 = Plant::HasCondition(uVar12,2);
          if (cVar2 != '\0') break;
          uVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
          cVar2 = Plant::HasCondition(uVar12,1);
          if (cVar2 != '\0') break;
          if (iVar4 == 0x1b) {
            pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x120);
            uVar12 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(pvVar1);
            uVar13 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(pvVar1);
            local_68[0] = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
            local_80[0] = std::
                          find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Plant*>
                                    (uVar12,uVar13,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
            local_68[0] = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end(pvVar1);
            bVar3 = __gnu_cxx::operator==
                              ((__normal_iterator *)local_80,(__normal_iterator *)local_68);
            if (bVar3) {
              local_68[0] = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)pvVar1,
                         (BoardEntity **)local_68);
              if (this[0xc4] == (MaybeeBee)0x0) {
                SetPowered(this);
              }
              fVar16 = (float)Sexy::Rand(1.0);
              if ((*(int *)(this + 200) == 5) && (fVar16 < *(float *)(this + 0xcc))) {
                FUN_04e2d884(this + 0xc6,1);
                refreshAnimation(this);
              }
            }
            break;
          }
          eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                    ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_98);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
      }
    }
  }
  iVar4 = *(int *)(this + 0xec);
  do {
    switch(iVar4) {
    case 1:
      cVar2 = HasTarget(this);
      if (cVar2 == '\0') goto LAB_04e348f8;
      setState(this,2);
      iVar5 = *(int *)(this + 0xec);
      break;
    case 2:
      cVar2 = HasTarget(this);
      if (cVar2 == '\0') {
LAB_04e34958:
        setState(this,1);
        iVar5 = *(int *)(this + 0xec);
      }
      else {
        cVar2 = shouldStartSting(this);
        if (cVar2 == '\0') {
          moveTowardTarget(this);
          iVar5 = *(int *)(this + 0xec);
        }
        else {
          setState(this,3);
          iVar5 = *(int *)(this + 0xec);
        }
      }
      break;
    case 3:
      cVar2 = HasTarget(this);
      if (cVar2 == '\0') goto LAB_04e34958;
LAB_04e348f8:
      iVar5 = *(int *)(this + 0xec);
      break;
    default:
      iVar5 = iVar4;
      goto LAB_04e34814;
    case 5:
      fVar16 = (float)FUN_04e2da58(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                   *(undefined4 *)(this + 0x20));
      if (fVar16 <= *(float *)(this + 0xd0)) {
        moveOutOfRange(this);
        iVar5 = *(int *)(this + 0xec);
      }
      else {
        setState(this,1);
        pPVar6 = Board::GetGameSubSystem<PlantMaybeeSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)(this + 0xb0));
        PlantMaybeeSubSystem::AddBee(pPVar6,this,(RtWeakPtr<Sexy::SoundResource> *)local_68,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        iVar5 = *(int *)(this + 0xec);
      }
    }
    bVar3 = iVar4 != iVar5;
    iVar4 = iVar5;
  } while (bVar3);
LAB_04e34814:
  if (iVar5 == 5) {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 0x120);
    (**(code **)(*(long *)this + 0xb0))(local_90,this);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80,2,local_90,
               0xffffffff,0xffffffff);
    local_b8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_80);
    local_b0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_80);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0), bVar3)
    {
      ppBVar11 = (BoardEntity **)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
      uVar12 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar1);
      uVar13 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar1);
      local_a8 = std::
                 find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                           (uVar12,uVar13,ppBVar11);
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar1);
      bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_a8,(__normal_iterator *)local_68);
      if (bVar3) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)pvVar1,ppBVar11);
        pBVar15 = *ppBVar11;
        iVar4 = *(int *)(this + 200);
        pcVar14 = *(code **)(*(long *)pBVar15 + 0x110);
        Sexy::Point::Point((Point *)&local_a0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)(float)((iVar4 + 1) * 0x1e),(undefined4)local_98,local_98._4_4_,
                   (DamageInfo *)local_68,(Point *)&local_a0,0);
        (*pcVar14)(pBVar15,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MaybeeBee::onUpdate() */

void __thiscall MaybeeBee::onUpdate(MaybeeBee *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (bVar1) {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  }
  updateBee(this);
  return;
}


/* MaybeeBee::Draw(Sexy::Graphics*) */

void __thiscall MaybeeBee::Draw(MaybeeBee *this,Graphics *param_1)

{
  char cVar1;
  wchar_t wVar2;
  
  RealObject::Draw((Graphics *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x78));
  if (cVar1 == '\0') {
    return;
  }
  wVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  Sexy::Font::CharWidthKern(wVar2,(wchar_t)param_1);
  return;
}


/* non-virtual thunk to MaybeeBee::Draw(Sexy::Graphics*) */

void __thiscall MaybeeBee::Draw(MaybeeBee *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


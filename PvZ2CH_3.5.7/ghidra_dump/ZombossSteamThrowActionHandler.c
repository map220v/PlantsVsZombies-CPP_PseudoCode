// Class: ZombossSteamThrowActionHandler


/* ZombossSteamThrowActionHandler::onThrowCoalAnimDone(std::string const&) */

void ZombossSteamThrowActionHandler::onThrowCoalAnimDone(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamThrowActionHandler::StaticClassInit() */

void ZombossSteamThrowActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamThrowActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_03c462ec,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamThrowActionHandler::StaticGetClass() */

long * ZombossSteamThrowActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamThrowActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamThrowActionHandler::GetClass() const */

long * ZombossSteamThrowActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamThrowActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamThrowActionHandler::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float,
   float) */

void __thiscall
ZombossSteamThrowActionHandler::LaunchProjectileAt
          (ZombossSteamThrowActionHandler *this,Projectile *param_1,SexyVector3 *param_2,
          float param_3,float param_4)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  fVar5 = *(float *)(pZVar1 + 0x54);
  fVar2 = (float)Sexy::Rand(param_3 * fVar5);
  fVar4 = *(float *)(pZVar1 + 0x50);
  fVar3 = (float)Sexy::Rand(param_4 * fVar4);
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamThrowActionHandler::OnPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombossSteamThrowActionHandler::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  Board *pBVar14;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  RtObject *this;
  ZombieZombossMech *this_00;
  PopAnimRig *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  long lVar6;
  Point *pPVar7;
  ZombossHydraSprayActionDefinition *pZVar8;
  Projectile *pPVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_4,"use_action");
  if (bVar2) {
    this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
    this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
    Sexy::Insets::Insets(aIStack_18);
    this_01 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this_00);
    std::string::string((string *)&local_28,"r2");
    PopAnimRig::CalcSymbolRect(this_01,(string *)&local_28,(TRect *)aIStack_18);
    std::string::~string((string *)&local_28);
    nop();
    fVar13 = *(float *)(this_00 + 0x1c);
    fVar11 = (float)FUN_03c3ef48(*(undefined4 *)(this_00 + 0x18),fVar13,
                                 *(undefined4 *)(this_00 + 0x20));
    Sexy::TRect<int>::GetCenter();
    iVar3 = FUN_03c3f354(local_28);
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this_00);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    fVar12 = *(float *)(lVar6 + 0xc4);
    Sexy::TRect<int>::GetCenter();
    iVar4 = FUN_03c3f354(local_24);
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this_00);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_38,(float)(int)((fVar11 - fVar12) + (float)iVar3),
               (float)(int)((fVar13 - *(float *)(lVar6 + 200)) + (float)iVar4),0.0);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x28));
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x28));
    fVar11 = _FUN_03c468b4;
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2)
    {
      pPVar7 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      uVar1 = local_30;
      pBVar14._4_4_ = local_38._4_4_;
      pBVar14._0_4_ = (Board *)local_38;
      uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
      pZVar8 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)(pZVar8 + 0x48));
      pPVar9 = (Projectile *)
               Board::AddProjectile
                         (pBVar14._0_4_,pBVar14._4_4_,uVar1,uVar10,(string *)&local_28,this_00,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      BoardTransforms::GridToBoardSpace(pPVar7);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)local_40,(float)local_3c,0.0);
      LaunchProjectileAt((ZombossSteamThrowActionHandler *)param_1,pPVar9,(SexyVector3 *)&local_28,
                         fVar11,fVar11);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombossSteamThrowActionHandler::ZombossSteamThrowActionHandler() */

void __thiscall
ZombossSteamThrowActionHandler::ZombossSteamThrowActionHandler(ZombossSteamThrowActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06753250;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* ZombossSteamThrowActionHandler::StaticNew() */

ZombossSteamThrowActionHandler * ZombossSteamThrowActionHandler::StaticNew(void)

{
  ZombossSteamThrowActionHandler *this;
  
  this = ::operator_new(0x40);
  ZombossSteamThrowActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamThrowActionHandler::ThrowCoal() */

void __thiscall ZombossSteamThrowActionHandler::ThrowCoal(ZombossSteamThrowActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onThrowCoalAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Steam::PlayThrowCoal
            ((ZombieAnimRig_ZombossMech_Steam *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamThrowActionHandler::onStartAction() */

void ZombossSteamThrowActionHandler::onStartAction(void)

{
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *pZVar1;
  ZombieActionHandler *in_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie(in_x0);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onThrowCoalAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Steam::PlayThrowCoal
            ((ZombieAnimRig_ZombossMech_Steam *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamThrowActionHandler::~ZombossSteamThrowActionHandler() */

void __thiscall
ZombossSteamThrowActionHandler::~ZombossSteamThrowActionHandler
          (ZombossSteamThrowActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06753250;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSteamThrowActionHandler::~ZombossSteamThrowActionHandler() */

void __thiscall
ZombossSteamThrowActionHandler::~ZombossSteamThrowActionHandler
          (ZombossSteamThrowActionHandler *this)

{
  ~ZombossSteamThrowActionHandler(this);
  AK::FreeHook(this);
  return;
}


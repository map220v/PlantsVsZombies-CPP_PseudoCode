// Class: MiniGamePerkItemKillAllZombies


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemKillAllZombies::StaticClassInit() */

void MiniGamePerkItemKillAllZombies::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkItemKillAllZombies");
    (*pcVar2)(plVar1,asStack_10,FUN_0389879c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItemKillAllZombies::StaticGetClass() */

long * MiniGamePerkItemKillAllZombies::StaticGetClass(void)

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
  uVar2 = MiniGamePerkItem::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemKillAllZombies",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemKillAllZombies::GetClass() const */

long * MiniGamePerkItemKillAllZombies::GetClass(void)

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
  uVar2 = MiniGamePerkItem::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemKillAllZombies",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemKillAllZombies::~MiniGamePerkItemKillAllZombies() */

void __thiscall
MiniGamePerkItemKillAllZombies::~MiniGamePerkItemKillAllZombies
          (MiniGamePerkItemKillAllZombies *this)

{
  *(undefined ***)this = &PTR_GetClass_066b06a0;
  MiniGamePerkItem::~MiniGamePerkItem((MiniGamePerkItem *)this);
  return;
}


/* MiniGamePerkItemKillAllZombies::~MiniGamePerkItemKillAllZombies() */

void __thiscall
MiniGamePerkItemKillAllZombies::~MiniGamePerkItemKillAllZombies
          (MiniGamePerkItemKillAllZombies *this)

{
  ~MiniGamePerkItemKillAllZombies(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkItemKillAllZombies::MiniGamePerkItemKillAllZombies() */

void __thiscall
MiniGamePerkItemKillAllZombies::MiniGamePerkItemKillAllZombies(MiniGamePerkItemKillAllZombies *this)

{
  MiniGamePerkItem::MiniGamePerkItem((MiniGamePerkItem *)this);
  *(undefined ***)this = &PTR_GetClass_066b06a0;
  return;
}


/* MiniGamePerkItemKillAllZombies::StaticNew() */

MiniGamePerkItemKillAllZombies * MiniGamePerkItemKillAllZombies::StaticNew(void)

{
  MiniGamePerkItemKillAllZombies *this;
  
  this = ::operator_new(0x30);
  MiniGamePerkItemKillAllZombies(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemKillAllZombies::tryAffectZombies() */

void MiniGamePerkItemKillAllZombies::tryAffectZombies(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  DartichokeLeaf *in_x0;
  undefined8 *puVar4;
  Zombie *pZVar5;
  Effect_PopAnim *this;
  ResourceInfo *pRVar6;
  char *pcVar7;
  PopAnimRig *this_00;
  LineBreakCategory *pLVar8;
  Point *in_x3;
  LineBreakCategory *in_x4;
  code *pcVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesOnBoard(avStack_80,2);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar4);
    if ((bVar1) &&
       (pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4), pZVar5 != (Zombie *)0x0)) {
      in_x4 = *(LineBreakCategory **)(*(long *)pZVar5 + 0x328);
      cVar2 = (*(code *)in_x4)();
      if ((cVar2 == '\0') &&
         ((cVar2 = (**(code **)(*(long *)pZVar5 + 0x330))(pZVar5), cVar2 == '\0' &&
          (cVar2 = (**(code **)(*(long *)pZVar5 + 0x4d8))(pZVar5), cVar2 == '\0')))) {
        cVar2 = (**(code **)(*(long *)pZVar5 + 0x508))(pZVar5);
        if ((cVar2 == '\0') &&
           ((cVar2 = RealObject::IsOnOpposingTeam(pZVar5,1), cVar2 != '\0' &&
            (cVar2 = DartichokeLeaf::CheckValidKillZombie(in_x0,pZVar5), cVar2 != '\0')))) {
          pcVar9 = *(code **)(*(long *)pZVar5 + 0x120);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          in_x4 = (LineBreakCategory *)0x0;
          in_x3 = aPStack_90;
          DamageInfo::DamageInfo((DamageInfo *)0x0,local_88,local_84,aDStack_68,4,0);
          (*pcVar9)(pZVar5,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) / 2 + 1);
  fVar10 = (float)iVar3 + DAT_06ab6988;
  iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) / 2 + 1);
  fVar11 = (float)iVar3 + DAT_06ab698c;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_88,"POPANIM_EFFECTS_POWER_UP_TACTICALCUKE_EXPLOSION");
  GetPAMByName((string *)&local_88);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aDStack_68);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
  std::string::~string((string *)&local_88);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aDStack_68,fVar10,fVar11,0.0);
  pLVar8 = (LineBreakCategory *)0xc3500;
  auVar12 = StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)this,(SexyVector3 *)aDStack_68,800000);
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar12._0_8_,auVar12._8_8_,pLVar8,(LineBreakCategory *)in_x3,in_x4);
  if (cVar2 == '\0') {
    (**(code **)(*(long *)this + 0x80))(0x40000000,this);
  }
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this,false);
  std::string::string((string *)aDStack_68,"animation");
  Effect_PopAnim::PlaySingleAnimation(this,aDStack_68,0);
  std::string::~string((string *)aDStack_68);
  nop();
  pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar7,"Play_UI_PowerUp_Cuke");
  Effect_PopAnim::GetPopAnimRigPtr();
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
  std::string::string((string *)aDStack_68,"animation");
  fVar10 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,(string *)aDStack_68);
  std::string::~string((string *)aDStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
  Board::ExplosionShakeBoard(*(Board **)(gLawnApp + 0x9f0),0x14,5,fVar10);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItemKillAllZombies::Use() */

void __thiscall MiniGamePerkItemKillAllZombies::Use(MiniGamePerkItemKillAllZombies *this)

{
  MiniGamePerkItem::Use((MiniGamePerkItem *)this);
  tryAffectZombies();
  return;
}


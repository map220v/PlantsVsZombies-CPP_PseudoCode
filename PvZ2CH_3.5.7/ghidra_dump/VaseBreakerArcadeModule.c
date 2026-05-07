// Class: VaseBreakerArcadeModule


/* VaseBreakerArcadeModule::StaticGetClass() */

long * VaseBreakerArcadeModule::StaticGetClass(void)

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
  uVar2 = ArcadeModule::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerArcadeModule",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerArcadeModule::GetEndlessState(int&, int&) */

void __thiscall
VaseBreakerArcadeModule::GetEndlessState(VaseBreakerArcadeModule *this,int *param_1,int *param_2)

{
  char cVar1;
  hash_node *phVar2;
  ArcadePropertySheet *this_00;
  string asStack_20 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  phVar2 = (hash_node *)ProfileUtils::Profile();
  this_00 = (ArcadePropertySheet *)ArcadePropertySheet::Get();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_18,phVar2,(hash_node **)this_00);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  cVar1 = ArcadePropertySheet::IsLevelEndless(this_00,asStack_20);
  if (cVar1 == '\0') {
    std::string::~string(asStack_20);
  }
  else {
    ArcadeProgressDatabase::GetCurrentVaseBreakerEndlessState
              ((ArcadeProgressDatabase *)ahStack_18,asStack_20,param_1,param_2);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerArcadeModule::SetEndlessState(int, int) */

void __thiscall
VaseBreakerArcadeModule::SetEndlessState(VaseBreakerArcadeModule *this,int param_1,int param_2)

{
  char cVar1;
  hash_node *phVar2;
  ArcadePropertySheet *this_00;
  string asStack_20 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  phVar2 = (hash_node *)ProfileUtils::Profile();
  this_00 = (ArcadePropertySheet *)ArcadePropertySheet::Get();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_18,phVar2,(hash_node **)this_00);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  cVar1 = ArcadePropertySheet::IsLevelEndless(this_00,asStack_20);
  if (cVar1 == '\0') {
    std::string::~string(asStack_20);
  }
  else {
    ArcadeProgressDatabase::SetCurrentVaseBreakerEndlessState
              ((ArcadeProgressDatabase *)ahStack_18,asStack_20,param_1,param_2);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerArcadeModule::VaseBreakerArcadeModule() */

void __thiscall VaseBreakerArcadeModule::VaseBreakerArcadeModule(VaseBreakerArcadeModule *this)

{
  ArcadeModule::ArcadeModule((ArcadeModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06918540;
  return;
}


/* VaseBreakerArcadeModule::StaticNew() */

VaseBreakerArcadeModule * VaseBreakerArcadeModule::StaticNew(void)

{
  VaseBreakerArcadeModule *this;
  
  this = ::operator_new(0x18);
  VaseBreakerArcadeModule(this);
  return this;
}


/* VaseBreakerArcadeModule::~VaseBreakerArcadeModule() */

void __thiscall VaseBreakerArcadeModule::~VaseBreakerArcadeModule(VaseBreakerArcadeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06918540;
  ArcadeModule::~ArcadeModule((ArcadeModule *)this);
  return;
}


/* VaseBreakerArcadeModule::~VaseBreakerArcadeModule() */

void __thiscall VaseBreakerArcadeModule::~VaseBreakerArcadeModule(VaseBreakerArcadeModule *this)

{
  ~VaseBreakerArcadeModule(this);
  AK::FreeHook(this);
  return;
}


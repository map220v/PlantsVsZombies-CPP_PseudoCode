// Class: TitleScreen


/* TitleScreen::SetSkipIntro(bool) */

void __thiscall TitleScreen::SetSkipIntro(TitleScreen *this,bool param_1)

{
  this[0xe4] = (TitleScreen)param_1;
  return;
}


/* TitleScreen::GetFirstDecompressTotalAmount() */

undefined4 TitleScreen::GetFirstDecompressTotalAmount(void)

{
  return 0x3e4ccccd;
}


/* TitleScreen::GetSecondDecompressTotalAmount() */

undefined4 TitleScreen::GetSecondDecompressTotalAmount(void)

{
  return 0x3f4ccccd;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::GetTargetRSBDecompressSize(std::string const&) */

void __thiscall TitleScreen::GetTargetRSBDecompressSize(TitleScreen *this,string *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uchar *puVar3;
  string asStack_48 [8];
  Buffer aBStack_40 [8];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = 0;
  (**(code **)(**(long **)(gLawnApp + 0x28) + 0x38))(asStack_48,*(long **)(gLawnApp + 0x28));
  FUN_031dcc6c(aBStack_40,asStack_48,param_1);
  Sexy::Buffer::Buffer(aBStack_38);
  cVar1 = Sexy::SexyAppBase::ReadBufferFromFile(Sexy::gSexyAppBase,aBStack_40,SUB81(aBStack_38,0));
  if (cVar1 != '\0') {
    puVar3 = (uchar *)Sexy::Buffer::GetDataPtr(aBStack_38);
    uVar2 = SizeForUncompress2(puVar3);
  }
  Sexy::Buffer::~Buffer(aBStack_38);
  std::string::~string((string *)aBStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* TitleScreen::IsTitleScreenFinished() const */

bool __thiscall TitleScreen::IsTitleScreenFinished(TitleScreen *this)

{
  return *(int *)(this + 0xd4) == 6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::LoadRsbs() */

void TitleScreen::LoadRsbs(void)

{
  ResourceManager *pRVar1;
  float fVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"plant1.rsb");
  std::string::string(asStack_10,"properties\\resourcesPlant1.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"plant2.rsb");
  std::string::string(asStack_10,"properties\\resourcesPlant2.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"plant3.rsb");
  std::string::string(asStack_10,"properties\\resourcesPlant3.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"zombie1.rsb");
  std::string::string(asStack_10,"properties\\resourcesZombie1.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"zombie2.rsb");
  std::string::string(asStack_10,"properties\\resourcesZombie2.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"zombie3.rsb");
  std::string::string(asStack_10,"properties\\resourcesZombie3.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"uiactive2.rsb");
  std::string::string(asStack_10,"properties\\resourcesUIActive2.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"pirate.rsb");
  std::string::string(asStack_10,"properties\\resourcesPirate.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"cowboy.rsb");
  std::string::string(asStack_10,"properties\\resourcesCowboy.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"kongfu.rsb");
  std::string::string(asStack_10,"properties\\resourcesKongfu.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"future.rsb");
  std::string::string(asStack_10,"properties\\resourcesFuture.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"dark.rsb");
  std::string::string(asStack_10,"properties\\resourcesDark.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"beach.rsb");
  std::string::string(asStack_10,"properties\\resourcesBeach.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"iceage.rsb");
  std::string::string(asStack_10,"properties\\resourcesIceage.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"skycity.rsb");
  std::string::string(asStack_10,"properties\\resourcesSkycity.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"lostcity.rsb");
  std::string::string(asStack_10,"properties\\resourcesLostcity.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"eighties.rsb");
  std::string::string(asStack_10,"properties\\resourcesEighties.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"dino.rsb");
  std::string::string(asStack_10,"properties\\resourcesDino.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"modern.rsb");
  std::string::string(asStack_10,"properties\\resourcesModern.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"steam.rsb");
  std::string::string(asStack_10,"properties\\resourcesSteam.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"renai.rsb");
  std::string::string(asStack_10,"properties\\resourcesRenai.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"heian.rsb");
  std::string::string(asStack_10,"properties\\resourcesHeian.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"twister.rsb");
  std::string::string(asStack_10,"properties\\resourcesTwister.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  Sexy::OutputDebugStrF((wchar_t *)"Title Screen load rsb");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::LoadRsbsExtra() */

void TitleScreen::LoadRsbsExtra(void)

{
  ResourceManager *pRVar1;
  float fVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"plant1.rsb");
  std::string::string(asStack_10,"properties\\resourcesPlant1.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"plant2.rsb");
  std::string::string(asStack_10,"properties\\resourcesPlant2.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"plant3.rsb");
  std::string::string(asStack_10,"properties\\resourcesPlant3.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"zombie1.rsb");
  std::string::string(asStack_10,"properties\\resourcesZombie1.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"zombie2.rsb");
  std::string::string(asStack_10,"properties\\resourcesZombie2.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"zombie3.rsb");
  std::string::string(asStack_10,"properties\\resourcesZombie3.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"uiactive2.rsb");
  std::string::string(asStack_10,"properties\\resourcesUIActive2.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"pirate.rsb");
  std::string::string(asStack_10,"properties\\resourcesPirate.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"cowboy.rsb");
  std::string::string(asStack_10,"properties\\resourcesCowboy.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"kongfu.rsb");
  std::string::string(asStack_10,"properties\\resourcesKongfu.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"future.rsb");
  std::string::string(asStack_10,"properties\\resourcesFuture.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"dark.rsb");
  std::string::string(asStack_10,"properties\\resourcesDark.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"beach.rsb");
  std::string::string(asStack_10,"properties\\resourcesBeach.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"iceage.rsb");
  std::string::string(asStack_10,"properties\\resourcesIceage.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"skycity.rsb");
  std::string::string(asStack_10,"properties\\resourcesSkycity.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"lostcity.rsb");
  std::string::string(asStack_10,"properties\\resourcesLostcity.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"eighties.rsb");
  std::string::string(asStack_10,"properties\\resourcesEighties.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"dino.rsb");
  std::string::string(asStack_10,"properties\\resourcesDino.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"modern.rsb");
  std::string::string(asStack_10,"properties\\resourcesModern.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"steam.rsb");
  std::string::string(asStack_10,"properties\\resourcesSteam.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"renai.rsb");
  std::string::string(asStack_10,"properties\\resourcesRenai.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"heian.rsb");
  std::string::string(asStack_10,"properties\\resourcesHeian.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  fVar2 = *(float *)(gLawnApp + 0x28dc);
  pRVar1 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
  std::string::string(asStack_18,"twister.rsb");
  std::string::string(asStack_10,"properties\\resourcesTwister.rton");
  Sexy::ResourceManager::Init(pRVar1,0x4b0,(int)fVar2,asStack_18,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  Sexy::OutputDebugStrF((wchar_t *)"Title Screen load rsb extra");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::InitDecompressImage() */

void __thiscall TitleScreen::InitDecompressImage(TitleScreen *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_044af16c(0x2d0);
  iVar2 = FUN_044af16c(0x23);
  iVar3 = FUN_044af16c(0x2d);
  iVar3 = (*(int *)(this + 0x50) - iVar1) / 2 - iVar3;
  iVar4 = FUN_044af16c(0x1eb);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar4,iVar1,iVar2);
  *(undefined8 *)(this + 0x114) = local_18;
  *(undefined8 *)(this + 0x11c) = uStack_10;
  std::string::string((string *)&local_18,"IMAGE_UI_MAINMENU_BACKGROUND");
  uVar8 = StringHelper::ToImage((string *)&local_18,false);
  *(undefined8 *)(this + 0x170) = uVar8;
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"IMAGE_UI_MAINMENU_BACKGROUND_T");
  uVar8 = StringHelper::ToImage((string *)&local_18,false);
  *(undefined8 *)(this + 0x178) = uVar8;
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"IMAGE_UI_MAINMENU_LOADER_METER_DECOMPRESS");
  uVar8 = StringHelper::ToImage((string *)&local_18,false);
  *(undefined8 *)(this + 0x180) = uVar8;
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"IMAGE_UI_MAINMENU_LOADER_METER_DECOMPRESS_FILL");
  uVar8 = StringHelper::ToImage((string *)&local_18,false);
  *(undefined8 *)(this + 0x188) = uVar8;
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"IMAGE_UI_MAINMENU_LOADER_METER");
  uVar8 = StringHelper::ToImage((string *)&local_18,false);
  *(undefined8 *)(this + 400) = uVar8;
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"IMAGE_UI_MAINMENU_LOADER_FILL");
  uVar8 = StringHelper::ToImage((string *)&local_18,false);
  *(undefined8 *)(this + 0x198) = uVar8;
  std::string::~string((string *)&local_18);
  nop();
  if ((*(LotteryResultProgressBar **)(this + 0x180) == (LotteryResultProgressBar *)0x0) ||
     (*(long *)(this + 0x188) == 0)) {
    iVar7 = -0x3c;
    iVar6 = 0x1e;
    iVar9 = -0x3c;
    iVar5 = 0x1e;
  }
  else {
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x180));
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x188));
    iVar5 = (iVar5 - iVar6) / 2;
    iVar6 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x180));
    iVar7 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x188));
    iVar9 = iVar5 * -2;
    iVar6 = (iVar6 - iVar7) / 2;
    iVar7 = iVar6 * -2;
  }
  Sexy::Insets::Insets((Insets *)&local_18,iVar3 + iVar5,iVar4 + iVar6,iVar1 + iVar9,iVar2 + iVar7);
  *(undefined8 *)(this + 0x124) = local_18;
  *(undefined8 *)(this + 300) = uStack_10;
  iVar3 = FUN_044af16c(0);
  iVar1 = FUN_044af16c(0x1b9);
  iVar2 = FUN_044af16c(0x37);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar1,*(int *)(this + 0x50),iVar2);
  *(undefined8 *)(this + 0x140) = local_18;
  *(undefined8 *)(this + 0x148) = uStack_10;
  iVar3 = FUN_044af16c(0);
  iVar1 = FUN_044af16c(0x213);
  iVar2 = FUN_044af16c(0x37);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar1,*(int *)(this + 0x50),iVar2);
  iVar3 = *(int *)(this + 0x114);
  iVar1 = *(int *)(this + 0x11c);
  *(undefined8 *)(this + 0x160) = local_18;
  *(undefined8 *)(this + 0x168) = uStack_10;
  iVar2 = FUN_044af16c(0);
  iVar4 = FUN_044af16c(0x1e9);
  iVar5 = FUN_044af16c(0x3c);
  iVar6 = FUN_044af16c(0x37);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3 + iVar1 + iVar2,iVar4,iVar5,iVar6);
  *(undefined8 *)(this + 0x150) = local_18;
  *(undefined8 *)(this + 0x158) = uStack_10;
  LawnApp::GenerateFonts(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TitleScreen::SetState(TitleState) */

void __thiscall TitleScreen::SetState(TitleScreen *this,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0xd4) != param_2) {
    *(int *)(this + 0xd4) = param_2;
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0xe8) = uVar1;
  }
  return;
}


/* TitleScreen::GetPreviousDecompressTime() */

int __thiscall TitleScreen::GetPreviousDecompressTime(TitleScreen *this)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(this + 0x110) < 1) {
    iVar2 = 0;
  }
  else {
    lVar4 = 0;
    iVar2 = 0;
    do {
      pfVar1 = (float *)FUN_044af164(*(undefined8 *)(this + 0xf8),lVar4);
      fVar8 = *pfVar1;
      fVar5 = (float)GetSecondDecompressTotalAmount();
      fVar6 = (float)PVZ_Dt();
      fVar7 = (float)GetSecondDecompressTotalAmount();
      iVar3 = (int)lVar4;
      lVar4 = lVar4 + 1;
      iVar2 = (int)((float)(int)((fVar8 * fVar5) / (fVar6 * fVar7 * 0.9)) + (float)iVar2);
    } while (iVar3 + 1 < *(int *)(this + 0x110));
  }
  return iVar2;
}


/* TitleScreen::GetTotalDecompressTime() */

int __thiscall TitleScreen::GetTotalDecompressTime(TitleScreen *this)

{
  float *pfVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar3 = 0;
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0xf8);
    uVar2 = FUN_044af158(uVar5,*(undefined8 *)(this + 0x100));
    if (uVar2 <= uVar4) break;
    pfVar1 = (float *)FUN_044af164(uVar5,uVar4);
    fVar9 = *pfVar1;
    fVar6 = (float)GetSecondDecompressTotalAmount();
    fVar7 = (float)PVZ_Dt();
    fVar8 = (float)GetSecondDecompressTotalAmount();
    iVar3 = (int)((float)(int)((fVar9 * fVar6) / (fVar7 * fVar8 * 0.9)) + (float)iVar3);
    uVar4 = uVar4 + 1;
  }
  return iVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::GetLeftDecompressTime() */

void __thiscall TitleScreen::GetLeftDecompressTime(TitleScreen *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_10;
  int local_c;
  long local_8;
  
  iVar3 = *(int *)(this + 0x1a4);
  local_8 = ___stack_chk_guard;
  if (iVar3 == 0) {
    iVar1 = GetTotalDecompressTime(this);
    local_10 = GetPreviousDecompressTime(this);
    local_10 = iVar1 - local_10;
    local_c = iVar3;
    piVar2 = eastl::max_alt<int>(&local_10,&local_c);
    iVar3 = *piVar2;
    *(int *)(this + 0x1a4) = iVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::LoadRsbsProc() */

void __thiscall TitleScreen::LoadRsbsProc(TitleScreen *this)

{
  bool bVar1;
  string *psVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_044b1040(DAT_06b0c900);
  local_10 = FUN_044b1090(DAT_06b0c908);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar3 = FUN_0547429c();
    Sexy::OutputDebugStrF((wchar_t *)"TitleScreen::LoadRsbsProc() start load rsb %s",uVar3);
    Sexy::ResourceManager::Init
              (*(ResourceManager **)(Sexy::gSexyAppBase + 0x848),0x4b0,
               (int)*(float *)(gLawnApp + 0x28dc),psVar2,psVar2 + 8,true);
    *(undefined4 *)(this + 0x1a4) = 0;
    *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
    *(undefined4 *)(this + 0xdc) = 0;
    uVar3 = FUN_0547429c(psVar2);
    Sexy::OutputDebugStrF((wchar_t *)"TitleScreen::LoadRsbsProc() end load rsb %s",uVar3);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  Sexy::OutputDebugStrF((wchar_t *)"TitleScreen Load Rsbs Proc");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::LoadRsbsExtraProc() */

void __thiscall TitleScreen::LoadRsbsExtraProc(TitleScreen *this)

{
  bool bVar1;
  string *psVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_044b1040(DAT_06b0ca10);
  local_10 = FUN_044b1090(DAT_06b0ca18);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar3 = FUN_0547429c();
    Sexy::OutputDebugStrF((wchar_t *)"TitleScreen::LoadRsbsExtraProc() start load rsb %s",uVar3);
    Sexy::ResourceManager::Init
              (*(ResourceManager **)(Sexy::gSexyAppBase + 0x848),0x4b0,
               (int)*(float *)(gLawnApp + 0x28dc),psVar2,psVar2 + 8,true);
    *(undefined4 *)(this + 0x1a4) = 0;
    *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
    *(undefined4 *)(this + 0xdc) = 0;
    uVar3 = FUN_0547429c(psVar2);
    Sexy::OutputDebugStrF((wchar_t *)"TitleScreen::LoadRsbsExtraProc() end load rsb %s",uVar3);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  Sexy::OutputDebugStrF((wchar_t *)"TitleScreen Load Rsbs Extra Proc");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::NeedDecompressRsbs() */

void TitleScreen::NeedDecompressRsbs(void)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  ResStreamsManager *this;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = FUN_044b1040(DAT_06b0c900);
  local_20 = FUN_044b1090(DAT_06b0c908);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
        cVar1 = '\0', bVar2) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    this = *(ResStreamsManager **)(gLawnApp + 0x908);
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    cVar1 = Sexy::ResStreamsManager::NeedDecompressRsb(this,psVar3,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    if (cVar1 != '\0') break;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::NeedDecompressRsbsExtra() */

void TitleScreen::NeedDecompressRsbsExtra(void)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  ResStreamsManager *this;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = FUN_044b1040(DAT_06b0ca10);
  local_20 = FUN_044b1090(DAT_06b0ca18);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
        cVar1 = '\0', bVar2) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    this = *(ResStreamsManager **)(gLawnApp + 0x908);
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    cVar1 = Sexy::ResStreamsManager::NeedDecompressRsb(this,psVar3,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    if (cVar1 != '\0') break;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::~TitleScreen() */

void __thiscall TitleScreen::~TitleScreen(TitleScreen *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06852b90;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Init");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0x138);
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TitleScreen::~TitleScreen() */

void __thiscall TitleScreen::~TitleScreen(TitleScreen *this)

{
  ~TitleScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::InitForDecompressRsbs() */

void __thiscall TitleScreen::InitForDecompressRsbs(TitleScreen *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  string *psVar4;
  uint *puVar5;
  uint uVar6;
  float local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar2 = ProfileMgr::GetNumProfiles();
  if (iVar2 == 0) {
    local_30 = FUN_044b1040(DAT_06b0c900);
    local_28 = FUN_044b1090(DAT_06b0c908);
    uVar6 = 0;
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      local_34 = (float)GetTargetRSBDecompressSize(this,psVar4);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                ((vector<unsigned_int,std::allocator<unsigned_int>> *)&local_20,(uint *)&local_34);
      uVar6 = uVar6 + (int)local_34;
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
    }
  }
  else {
    uVar6 = 0;
    local_30 = FUN_044b1040(DAT_06b0ca10);
    local_28 = FUN_044b1090(DAT_06b0ca18);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      local_34 = (float)GetTargetRSBDecompressSize(this,psVar4);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                ((vector<unsigned_int,std::allocator<unsigned_int>> *)&local_20,(uint *)&local_34);
      uVar6 = uVar6 + (int)local_34;
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
    }
  }
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar5 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    local_34 = (float)*puVar5 * (1.0 / (float)uVar6);
    std::vector<float,std::allocator<float>>::push_back
              ((vector<float,std::allocator<float>> *)(this + 0xf8),&local_34);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
  }
  uVar3 = FUN_044af14c(local_20,local_18);
  *(undefined4 *)(this + 0x1a0) = uVar3;
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::TitleScreen() */

void __thiscall TitleScreen::TitleScreen(TitleScreen *this)

{
  LawnApp *this_00;
  char cVar1;
  TitleScreen TVar2;
  uint uVar3;
  undefined4 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06852b90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x114));
  Sexy::Insets::Insets((Insets *)(this + 0x124));
  FUN_05476574(this + 0x138);
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Init");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this[0xe4] = (TitleScreen)0x0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xe0) = 0x43e78000;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  *(undefined4 *)(this + 0xe8) = uVar4;
  SetState(this,0);
  cVar1 = IsPHd();
  if (cVar1 != '\0') {
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  uVar3 = ProfileMgr::GetNumProfiles();
  Sexy::OutputDebugStrF
            ((wchar_t *)"ProfileMgr::GetInstance().GetNumProfiles() = %d load rsb decompress init",
             (ulong)uVar3);
  if (uVar3 == 0) {
    TVar2 = (TitleScreen)NeedDecompressRsbs();
  }
  else {
    TVar2 = (TitleScreen)NeedDecompressRsbsExtra();
  }
  this[0xf0] = TVar2;
  *(undefined4 *)(this + 0x1a0) = 0;
  if (TVar2 != (TitleScreen)0x0) {
    InitForDecompressRsbs(this);
  }
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::DrawDecompressTips(Sexy::Graphics*) */

void __thiscall TitleScreen::DrawDecompressTips(TitleScreen *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *__s;
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[DECOMPRESS_TIPS_1]");
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aDStack_18,1);
  WriteWordInRect(param_1,asStack_20,this + 0x140,uVar2,aDStack_18,5,1);
  FUN_05476c50(asStack_20);
  DString::DString(aDStack_18,*(int *)(this + 0x110) + 1);
  __s = (char *)DString::c_str(aDStack_18);
  std::string::string(asStack_20,__s);
  Sexy::ToWString(asStack_20);
  std::string::~string(asStack_20);
  nop();
  DString::~DString(aDStack_18);
  TodStringTranslate(L"[DECOMPRESS_TIPS_2]");
  TodReplaceString((wstring *)aDStack_18,L"{NUMBER1}",awStack_30);
  FUN_05476c50(aDStack_18);
  TodReplaceNumberString(awStack_28,L"{NUMBER2}",*(int *)(this + 0x1a0));
  FUN_054766c8(awStack_28,aDStack_18);
  FUN_05476c50(aDStack_18);
  iVar1 = GetLeftDecompressTime(this);
  TodReplaceNumberString(awStack_28,L"{NUMBER3}",iVar1);
  FUN_054766c8(awStack_28,aDStack_18);
  FUN_05476c50(aDStack_18);
  if (*(int *)(this + 0xd4) == 5) {
    FUN_05477b24(asStack_20,awStack_28);
  }
  else {
    TodStringTranslate(L"[DECOMPRESS_TIPS_3]");
  }
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aDStack_18,1);
  WriteWordInRect(param_1,asStack_20,this + 0x160,uVar2,aDStack_18,5,1);
  FUN_05476c50(asStack_20);
  Sexy::StrFormat(L"%d%%",aDStack_18,(ulong)(uint)(int)(*(float *)(this + 0xd8) * 100.0));
  FUN_054766c8(this + 0x138,aDStack_18);
  FUN_05476c50(aDStack_18);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aDStack_18,1);
  WriteWordInRect(param_1,this + 0x138,this + 0x150,uVar2,aDStack_18,1,1);
  FUN_05476c50(awStack_28);
  FUN_05476c50(awStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x044b21cc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* TitleScreen::Draw(Sexy::Graphics*) */

void TitleScreen::Draw(Graphics *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LotteryResultProgressBar *pLVar11;
  float *pfVar12;
  SalesProgressBar *pSVar13;
  Image *pIVar14;
  ResourceInfo *pRVar15;
  Graphics *in_x1;
  wchar16 *extraout_x1;
  long lVar16;
  uint uVar17;
  LineBreakCategory *pLVar18;
  uint uVar19;
  LineBreakCategory *in_x3;
  uint uVar21;
  LineBreakCategory *in_x4;
  float fVar23;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  undefined1 auVar24 [12];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  undefined1 extraout_var_03 [12];
  float fVar25;
  float fVar26;
  float fVar27;
  RtWeakPtr aRStack_30 [8];
  float local_28;
  float local_24;
  float local_18 [4];
  LineBreakCategory *local_8;
  LineBreakCategory *pLVar20;
  LineBreakCategory *pLVar22;
  
  local_8 = ___stack_chk_guard;
  pLVar18 = ___stack_chk_guard;
  Sexy::Graphics::SetLinearBlend(in_x1,true);
  nop();
  uVar4 = FUN_044af148(*(undefined4 *)(param_1 + 0xd4));
  switch(uVar4) {
  case 1:
    Sexy::Color::Color((Color *)local_18,0);
    Sexy::Graphics::SetColor(in_x1,(Color *)local_18);
    Sexy::Graphics::FillRect(in_x1,0,0,*(int *)(param_1 + 0x50),*(int *)(param_1 + 0x54));
    std::string::string((string *)local_18,"IMAGE_LOGOS_EA_LOGO");
    GetImageByName((string *)local_18);
    std::string::~string((string *)local_18);
    nop();
    pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_28);
    iVar5 = *(int *)(param_1 + 0x50);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)pRVar15);
    iVar6 = *(int *)(param_1 + 0x54);
    iVar8 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pRVar15);
    Sexy::Graphics::DrawImage(in_x1,(Image *)pRVar15,(iVar5 - iVar7) / 2,(iVar6 - iVar8) / 2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    break;
  case 2:
    Sexy::Color::Color((Color *)local_18,0xf4,0xf4,0xf4);
    Sexy::Graphics::SetColor(in_x1,(Color *)local_18);
    Sexy::Graphics::FillRect(in_x1,0,0,*(int *)(param_1 + 0x50),*(int *)(param_1 + 0x54));
    fVar23 = (float)PVZ_T();
    fVar25 = fVar23 - *(float *)(param_1 + 0xe8);
    GetImageByName((string *)(&DAT_06b0c8c0 + (long)*(int *)(param_1 + 0xec) * 0x18));
    pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
    auVar24 = extraout_var_01;
    if (pRVar15 != (ResourceInfo *)0x0) {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_28);
      local_28 = (float)((*(int *)(param_1 + 0x50) - *(int *)(pRVar15 + 0x38)) / 2);
      fVar23 = (float)((*(int *)(param_1 + 0x54) - *(int *)(pRVar15 + 0x3c)) / 2);
      local_24 = fVar23;
      Sexy::Color::Color((Color *)local_18,1);
      Sexy::Graphics::SetColor(in_x1,(Color *)local_18);
      Sexy::Graphics::DrawImage(in_x1,(Image *)pRVar15,(int)local_28,(int)local_24);
      auVar24 = extraout_var_02;
    }
    lVar16 = (long)*(int *)(param_1 + 0xec);
    fVar26 = (float)(&DAT_06b0c8c8)[lVar16 * 6];
    if (fVar25 < fVar26) {
      local_28 = 0.0;
      local_18[0] = 1.0;
LAB_044b2494:
      auVar2._4_12_ = auVar24;
      auVar2._0_4_ = fVar23;
      fVar23 = CurveLerp<float>(auVar2,fVar26,fVar25,&local_28,(Color *)local_18,4);
      iVar5 = (int)((1.0 - fVar23) * 255.0);
    }
    else {
      iVar5 = 0;
      fVar23 = fVar26 + (float)(&DAT_06b0c8cc)[lVar16 * 6];
      if (fVar23 <= fVar25) {
        fVar26 = fVar23 + (float)(&DAT_06b0c8d0)[lVar16 * 6];
        local_18[0] = 0.0;
        local_28 = 1.0;
        goto LAB_044b2494;
      }
    }
    Sexy::Insets::Insets((Insets *)local_18,0,0,0,iVar5);
    Sexy::Graphics::SetColor(in_x1,(Color *)local_18);
    Sexy::Graphics::FillRect(in_x1,0,0,*(int *)(param_1 + 0x50),*(int *)(param_1 + 0x54));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    break;
  case 3:
  case 4:
  case 6:
    fVar23 = (float)PVZ_T();
    fVar25 = *(float *)(param_1 + 0xe8);
    pLVar11 = (LotteryResultProgressBar *)
              CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0c9b8);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    local_28 = 1.0;
    local_18[0] = (float)*(int *)(param_1 + 0x50) / (float)iVar5;
    pfVar12 = eastl::max_alt<float>(&local_28,local_18);
    fVar27 = *pfVar12;
    pSVar13 = (SalesProgressBar *)
              CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0c9b8);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
    fVar26 = fVar27 * (float)iVar5;
    fVar27 = (float)iVar6 * fVar27;
    pIVar14 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                 ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0c9b8);
    uVar21 = (uint)fVar26;
    pLVar22 = (LineBreakCategory *)(ulong)uVar21;
    uVar17 = (uint)(((float)*(int *)(param_1 + 0x50) - fVar26) * 0.5);
    pLVar18 = (LineBreakCategory *)(ulong)uVar17;
    uVar19 = (uint)(((float)*(int *)(param_1 + 0x54) - fVar27) * 0.5);
    pLVar20 = (LineBreakCategory *)(ulong)uVar19;
    Sexy::Graphics::DrawImage(in_x1,pIVar14,uVar17,uVar19,uVar21,(int)fVar27);
    iVar5 = *(int *)(param_1 + 0x50);
    cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      ((wchar16 *)(ulong)(uint)(iVar5 - (iVar5 >> 0x1f)),extraout_x1,pLVar18,pLVar20
                       ,pLVar22);
    if (cVar3 == '\0') {
      iVar6 = FUN_044af16c(0xdc);
      pLVar11 = (LotteryResultProgressBar *)
                CachedResourcePtr<Sexy::Image>::operator->
                          ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0c8d8);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      iVar6 = (iVar5 / 2 - iVar6) - iVar7 / 2;
      iVar5 = FUN_044af16c(0x14);
    }
    else {
      iVar6 = FUN_044af16c(0xaa);
      pLVar11 = (LotteryResultProgressBar *)
                CachedResourcePtr<Sexy::Image>::operator->
                          ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0c8d8);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      iVar6 = (iVar5 / 2 - iVar6) - iVar7 / 2;
      iVar5 = FUN_044af16c(0x28);
      iVar5 = -iVar5;
    }
    pLVar11 = (LotteryResultProgressBar *)
              CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0c8d8);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pSVar13 = (SalesProgressBar *)
              CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0c8d8);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar13);
    fVar26 = (float)iVar7 * 0.8;
    Sexy::Insets::Insets((Insets *)local_18,iVar6,iVar5,(int)fVar26,(int)((float)iVar8 * 0.8));
    CachedResourcePtr<Sexy::Image>::operator->((CachedResourcePtr<Sexy::Image> *)&DAT_06b0c8d8);
    DrawAdaptiveImage();
    if (param_1[0xf0] == (Graphics)0x0) {
      pLVar11 = *(LotteryResultProgressBar **)(param_1 + 400);
      auVar24 = extraout_var;
      if ((pLVar11 != (LotteryResultProgressBar *)0x0) && (*(long *)(param_1 + 0x198) != 0)) {
        iVar5 = *(int *)(param_1 + 0x50);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar7 = FUN_044af16c(0x1ff);
        Sexy::Graphics::DrawImage(in_x1,(Image *)pLVar11,(iVar5 - iVar6) / 2,iVar7);
        iVar5 = *(int *)(param_1 + 0x50);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel
                          (*(LotteryResultProgressBar **)(param_1 + 400));
        iVar7 = LotteryResultProgressBar::GetCurrentLevel
                          (*(LotteryResultProgressBar **)(param_1 + 400));
        iVar8 = LotteryResultProgressBar::GetCurrentLevel
                          (*(LotteryResultProgressBar **)(param_1 + 0x198));
        iVar5 = (iVar7 - iVar8) / 2 + (iVar5 - iVar6) / 2;
        iVar6 = FUN_044af16c(0x1ff);
        iVar7 = FUN_044af16c(1);
        iVar8 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(param_1 + 400));
        iVar9 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(param_1 + 0x198));
        Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_28,in_x1);
        iVar10 = LotteryResultProgressBar::GetCurrentLevel
                           (*(LotteryResultProgressBar **)(param_1 + 0x198));
        fVar26 = (float)iVar10 * *(float *)(param_1 + 0xd8);
        Sexy::Insets::Insets((Insets *)local_18,iVar5,0,(int)fVar26,*(int *)(param_1 + 0x54));
        Sexy::Graphics::SetClipRect(in_x1,(TRect *)local_18);
        Sexy::Graphics::DrawImage
                  (in_x1,*(Image **)(param_1 + 0x198),iVar5,iVar6 + iVar7 + (iVar8 - iVar9) / 2);
        Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_28);
        auVar24 = extraout_var_03;
      }
    }
    else {
      if (*(long *)(param_1 + 0x180) != 0) {
        Sexy::Insets::Insets((Insets *)local_18,(Insets *)(param_1 + 0x114));
        Draw9SliceImage();
      }
      fVar26 = (float)*(int *)(param_1 + 300) * *(float *)(param_1 + 0xd8);
      Sexy::Insets::Insets
                ((Insets *)&local_28,*(int *)(param_1 + 0x124),*(int *)(param_1 + 0x128),(int)fVar26
                 ,*(int *)(param_1 + 0x130));
      if (*(long *)(param_1 + 0x188) != 0) {
        Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_28);
        Draw9SliceImage();
      }
      DrawDecompressTips((TitleScreen *)param_1,in_x1);
      auVar24 = extraout_var_00;
    }
    if (*(int *)(param_1 + 0xd4) == 3) {
      local_28 = 0.0;
      local_18[0] = 1.0;
      auVar1._4_12_ = auVar24;
      auVar1._0_4_ = fVar26;
      fVar23 = CurveLerp<float>(auVar1,DAT_06a88750,fVar23 - fVar25,(Insets *)&local_28,
                                (Insets *)local_18,4);
      Sexy::Insets::Insets((Insets *)local_18,0,0,0,(int)((1.0 - fVar23) * 255.0));
      Sexy::Graphics::SetColor(in_x1,(Color *)local_18);
      Sexy::Graphics::FillRect(in_x1,0,0,*(int *)(param_1 + 0x50),*(int *)(param_1 + 0x54));
    }
    break;
  case 5:
    pfVar12 = (float *)0x0;
    if (*(LotteryResultProgressBar **)(param_1 + 0x170) != (LotteryResultProgressBar *)0x0) {
      iVar5 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(param_1 + 0x170));
      pSVar13 = *(SalesProgressBar **)(param_1 + 0x170);
      local_28 = 1.0;
      local_18[0] = (float)*(int *)(param_1 + 0x50) / (float)iVar5;
      pfVar12 = eastl::max_alt<float>(&local_28,local_18);
      fVar23 = *pfVar12;
      if (pSVar13 != (SalesProgressBar *)0x0) {
        pfVar12 = (float *)SalesProgressBar::GetCurrentLevel(pSVar13);
        fVar25 = (float)(int)pfVar12 * fVar23;
        if (*(Image **)(param_1 + 0x170) != (Image *)0x0) {
          fVar23 = (float)iVar5 * fVar23;
          uVar21 = (uint)fVar23;
          in_x4 = (LineBreakCategory *)(ulong)uVar21;
          uVar17 = (uint)(((float)*(int *)(param_1 + 0x50) - fVar23) * 0.5);
          pLVar18 = (LineBreakCategory *)(ulong)uVar17;
          uVar19 = (uint)(((float)*(int *)(param_1 + 0x54) - fVar25) * 0.5);
          in_x3 = (LineBreakCategory *)(ulong)uVar19;
          pfVar12 = (float *)Sexy::Graphics::DrawImage
                                       (in_x1,*(Image **)(param_1 + 0x170),uVar17,uVar19,uVar21,
                                        (int)fVar25);
        }
      }
    }
    pLVar11 = *(LotteryResultProgressBar **)(param_1 + 0x178);
    if (pLVar11 != (LotteryResultProgressBar *)0x0) {
      iVar5 = *(int *)(param_1 + 0x50);
      cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        ((wchar16 *)pfVar12,(wchar16 *)(ulong)(uint)(iVar5 - (iVar5 >> 0x1f)),
                         pLVar18,in_x3,in_x4);
      uVar4 = 0xaa;
      if (cVar3 == '\0') {
        uVar4 = 0xdc;
      }
      iVar6 = FUN_044af16c(uVar4);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      iVar8 = FUN_044af16c(0x14);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(param_1 + 0x178));
      iVar10 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(param_1 + 0x178));
      Sexy::Insets::Insets
                ((Insets *)local_18,(iVar5 / 2 - iVar6) - iVar7 / 2,iVar8,(int)((float)iVar9 * 0.8),
                 (int)((float)iVar10 * 0.8));
      DrawAdaptiveImage();
    }
    if (param_1[0xf0] != (Graphics)0x0) {
      if (*(long *)(param_1 + 0x180) != 0) {
        Sexy::Insets::Insets((Insets *)local_18,(Insets *)(param_1 + 0x114));
        Draw9SliceImage();
      }
      Sexy::Insets::Insets
                ((Insets *)&local_28,*(int *)(param_1 + 0x124),*(int *)(param_1 + 0x128),
                 (int)((float)*(int *)(param_1 + 300) * *(float *)(param_1 + 0xd8)),
                 *(int *)(param_1 + 0x130));
      if (*(long *)(param_1 + 0x188) != 0) {
        Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_28);
        Draw9SliceImage();
      }
      DrawDecompressTips((TitleScreen *)param_1,in_x1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TitleScreen::Update() */

void __thiscall TitleScreen::Update(TitleScreen *this)

{
  SexyAppBase *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  float *pfVar5;
  PurchaseBroker *this_01;
  DefineIDMgr *this_02;
  NetworkMgr *this_03;
  INetworkMsgProcess *this_04;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  long lVar7;
  LawnApp *pLVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_20 [2];
  float local_18 [2];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  (**(code **)(*(long *)this + 0xd8))(this);
  iVar9 = *(int *)(this + 0xd4);
  do {
    switch(iVar9) {
    case 0:
      this[0xe5] = (TitleScreen)0x0;
      if (this[0xe4] == (TitleScreen)0x0) {
        iVar3 = LawnApp::GetPlatform(gLawnApp);
        if (((iVar3 - 0xcU < 2 || iVar3 == 4) || (iVar3 == 0xa5)) || (iVar3 - 0x3cU < 5)) {
          SetState(this,1);
          iVar3 = *(int *)(this + 0xd4);
        }
        else {
          if (0xd < iVar3 - 0xb5U) goto LAB_044b298c;
          SetState(this,1);
          iVar3 = *(int *)(this + 0xd4);
        }
      }
      else {
        SetState(this,3);
        iVar3 = *(int *)(this + 0xd4);
      }
      break;
    case 1:
      fVar12 = (float)PVZ_T();
      if (fVar12 - *(float *)(this + 0xe8) <= 1.5) goto LAB_044b2878;
LAB_044b298c:
      SetState(this,2);
      iVar3 = *(int *)(this + 0xd4);
      break;
    case 2:
      fVar12 = (float)PVZ_T();
      lVar7 = (long)*(int *)(this + 0xec);
      if ((float)(&DAT_06b0c8cc)[lVar7 * 6] + (float)(&DAT_06b0c8c8)[lVar7 * 6] +
          (float)(&DAT_06b0c8d0)[lVar7 * 6] < fVar12 - *(float *)(this + 0xe8)) {
        uVar11 = PVZ_T();
        iVar3 = *(int *)(this + 0xec);
        *(undefined4 *)(this + 0xe8) = uVar11;
        *(int *)(this + 0xec) = iVar3 + 1;
        if ((0 < iVar3 + 1) && (cVar2 = areMainMenuGroupsLoaded(), cVar2 != '\0')) {
          completeGroupLoad();
          InitDecompressImage(this);
          SetState(this,3);
          p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          this_01 = (PurchaseBroker *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_rightmost(p_Var6);
          PurchaseBroker::Init(this_01);
          MessageRouter::Post((_func_void *)gMessageRouter);
          iVar3 = *(int *)(this + 0xd4);
          break;
        }
      }
LAB_044b2878:
      iVar3 = *(int *)(this + 0xd4);
      break;
    case 3:
      p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_rightmost(p_Var6);
      PurchaseBroker::GetUniqueID();
      bVar1 = std::operator!=((string *)local_10,"");
      uVar4 = FUN_0547429c((string *)local_10);
      Sexy::OutputDebugStrF((wchar_t *)"TITLESTATE_READY:GetUniqueID %s",uVar4);
      if (this[0xf0] == (TitleScreen)0x0) {
        local_20[0] = (float)LawnApp::InitialLoadProgress(gLawnApp);
        fVar10 = *(float *)(this + 0xd8);
        fVar12 = (float)PVZ_Dt();
        local_18[0] = fVar10 + fVar12 * 0.3;
        pfVar5 = eastl::min_alt<float>(local_20,local_18);
        *(float *)(this + 0xd8) = *pfVar5;
        fVar12 = (float)PVZ_T();
        fVar12 = fVar12 - *(float *)(this + 0xe8);
        cVar2 = LawnApp::IsDev(gLawnApp);
        if (cVar2 != '\0') goto LAB_044b2804;
LAB_044b2ad0:
        iVar3 = LawnApp::IsAndroidSDKInitEnd(gLawnApp);
        if ((iVar3 == 1) &&
           (((iVar3 = LawnApp::GetAndroidSDKInitStatus(gLawnApp), iVar3 != 0 || (bVar1)) &&
            (DAT_06a88754 + DAT_06a88750 < fVar12)))) goto LAB_044b2b0c;
      }
      else {
        fVar12 = (float)LawnApp::InitialLoadProgress(gLawnApp);
        local_20[0] = (float)GetFirstDecompressTotalAmount();
        fVar13 = *(float *)(this + 0xd8);
        local_20[0] = local_20[0] * fVar12;
        fVar12 = (float)PVZ_Dt();
        fVar10 = (float)GetFirstDecompressTotalAmount();
        local_18[0] = fVar13 + fVar12 * fVar10 * 0.3;
        pfVar5 = eastl::min_alt<float>(local_20,local_18);
        *(float *)(this + 0xd8) = *pfVar5;
        fVar12 = (float)PVZ_T();
        fVar12 = fVar12 - *(float *)(this + 0xe8);
        cVar2 = LawnApp::IsDev(gLawnApp);
        if (cVar2 == '\0') goto LAB_044b2ad0;
LAB_044b2804:
        if (DAT_06a88754 + DAT_06a88750 < fVar12) {
LAB_044b2b0c:
          SetState(this,4);
        }
      }
      std::string::~string((string *)local_10);
      iVar3 = *(int *)(this + 0xd4);
      break;
    case 4:
      fVar12 = *(float *)(this + 0xd8);
      if (this[0xf0] == (TitleScreen)0x0) {
        fVar10 = (float)PVZ_Dt();
        fVar12 = fVar12 + fVar10 * 0.3;
        *(float *)(this + 0xd8) = fVar12;
        pLVar8 = gLawnApp;
        cVar2 = LawnApp::GetDoneLoadingProfiles(gLawnApp);
        if ((1.0 < fVar12) && (cVar2 != '\0')) {
          this[0xe5] = (TitleScreen)0x1;
        }
        local_10[0] = (float)LawnApp::InitialLoadProgress(pLVar8);
      }
      else {
        fVar10 = (float)PVZ_Dt();
        fVar13 = (float)GetFirstDecompressTotalAmount();
        fVar12 = fVar12 + fVar10 * fVar13 * 0.3;
        *(float *)(this + 0xd8) = fVar12;
        pLVar8 = gLawnApp;
        cVar2 = LawnApp::GetDoneLoadingProfiles(gLawnApp);
        if ((cVar2 != '\0') &&
           (fVar10 = (float)GetFirstDecompressTotalAmount(), pLVar8 = gLawnApp, fVar10 < fVar12)) {
          this[0xe5] = (TitleScreen)0x1;
        }
        fVar12 = (float)LawnApp::InitialLoadProgress(pLVar8);
        local_10[0] = (float)GetFirstDecompressTotalAmount();
        local_10[0] = local_10[0] * fVar12;
      }
      pfVar5 = eastl::min_alt<float>(local_10,(float *)(this + 0xd8));
      *(float *)(this + 0xd8) = *pfVar5;
      this_00 = (SexyAppBase *)gLawnApp;
      if (this[0xe5] == (TitleScreen)0x0) goto LAB_044b2878;
      if (this[0xf0] == (TitleScreen)0x0) {
        LoadRsbs();
      }
      else {
        *(SexyAppBase *)(gLawnApp + 0x6b6) = (SexyAppBase)0x0;
        Sexy::SexyAppBase::StartLoadingThread(this_00);
      }
      SetState(this,5);
      iVar3 = *(int *)(this + 0xd4);
      break;
    case 5:
      if (gLawnApp[0x6b6] == (LawnApp)0x0) {
        lVar7 = 0;
        fVar12 = 0.0;
        if (0 < *(int *)(this + 0x110)) {
          do {
            pfVar5 = (float *)FUN_044af164(*(undefined8 *)(this + 0xf8),lVar7);
            fVar13 = *pfVar5;
            fVar10 = (float)GetSecondDecompressTotalAmount();
            iVar3 = (int)lVar7;
            fVar12 = fVar12 + fVar10 * fVar13;
            lVar7 = lVar7 + 1;
          } while (iVar3 + 1 < *(int *)(this + 0x110));
        }
        fVar14 = *(float *)(this + 0xdc);
        fVar10 = (float)PVZ_Dt();
        fVar13 = (float)GetSecondDecompressTotalAmount();
        *(float *)(this + 0xdc) = fVar14 + fVar10 * fVar13 * 0.03;
        fVar10 = (float)GetFirstDecompressTotalAmount();
        local_18[0] = fVar12 + *(float *)(this + 0xdc);
        pfVar5 = (float *)FUN_044af164(*(undefined8 *)(this + 0xf8),(long)*(int *)(this + 0x110));
        fVar14 = *pfVar5;
        fVar13 = (float)GetSecondDecompressTotalAmount();
        local_10[0] = fVar12 + fVar13 * fVar14;
        pfVar5 = eastl::min_alt<float>(local_18,local_10);
        iVar3 = *(int *)(this + 0xd4);
        *(float *)(this + 0xd8) = *pfVar5 + fVar10;
      }
      else {
        SetState(this,6);
        LawnApp::SetIsInited(gLawnApp,true);
        MessageRouter::Post<std::string_const&,char_const*>
                  ((MessageRouter *)gMessageRouter,Message::GameLoadEnd,"");
        this_02 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
        DefineIDMgr::GetNewUserDefineID(this_02);
        iVar3 = LawnApp::IsAndroidSDKInitEnd(gLawnApp);
        if ((iVar3 == 1) && (iVar3 = LawnApp::GetAndroidSDKInitStatus(gLawnApp), iVar3 == 0)) {
          p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_rightmost(p_Var6);
          PurchaseBroker::GetUniqueID();
          LawnApp::GetAppNameForiCloud();
          thunk_FUN_05475e00((string *)local_20,(string *)local_18);
          std::string::~string((string *)local_10);
          std::string::~string((string *)local_18);
        }
        Sexy::LazySingleton<IdentifierMgr>::GetInstance();
        Sexy::IAsyncNetworkTask::GetName();
        this_03 = (NetworkMgr *)NetworkMgr::Instance();
        this_04 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_03);
        INetworkMsgProcess::RequestDisplayID(this_04,(string *)local_20,(string *)local_10);
        std::string::~string((string *)local_10);
        std::string::~string((string *)local_20);
        iVar3 = *(int *)(this + 0xd4);
      }
      break;
    default:
      goto switchD_044b26bc_default;
    }
    bVar1 = iVar9 != iVar3;
    iVar9 = iVar3;
  } while (bVar1);
switchD_044b26bc_default:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


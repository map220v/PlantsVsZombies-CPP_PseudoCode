// Class: WorldMapTransitionDecider


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapTransitionDecider::PickTutorialOrWorldMap() */

void WorldMapTransitionDecider::PickTutorialOrWorldMap(void)

{
  GameStateMgr *pGVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string *psVar6;
  WorldDataManager *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  string asStack_10 [8];
  long local_8;
  
  uVar10 = DAT_06b0fdd8 & 1;
  local_8 = ___stack_chk_guard;
  if (((DAT_06b0fdd8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06b0fdd8), iVar5 != 0)) {
    std::string::string((string *)&DAT_06b0ff80,"intro1");
    nop();
    std::string::string((string *)&DAT_06b0ff88,"tutorial1");
    nop();
    std::string::string((string *)&DAT_06b0ff90,"tutorial2");
    nop();
    std::string::string((string *)&DAT_06b0ff98,"tutorial3");
    nop();
    std::string::string((string *)&DAT_06b0ffa0,"tutorial4");
    nop();
    std::string::string((string *)&DAT_06b0ffa8,"egypt1");
    nop();
    __cxa_guard_release(&DAT_06b0fdd8);
    __cxa_atexit(FUN_045289e4,uVar10,&DAT_06a88000);
  }
  if (((DAT_06b0fcc8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06b0fcc8), iVar5 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b0ff60,(string *)&DAT_06b0ff80,(allocator *)&DAT_06b0ffb0);
    __cxa_guard_release(&DAT_06b0fcc8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b0ff60,
                 &DAT_06a88000);
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_10,"tutorial1");
  bVar2 = PlayerInfo::GetLevelCompleted(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"intro1");
  bVar3 = PlayerInfo::GetLevelCompleted(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (bVar3 < bVar2) {
    std::string::string(asStack_10,"intro1");
    PlayerInfo::SetLevelCompleted(this_00,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
  }
  uVar10 = 0;
  do {
    uVar9 = uVar10;
    uVar7 = DAT_06b0ff60;
    uVar10 = FUN_04528e0c(DAT_06b0ff60,DAT_06b0ff68);
    if (uVar10 <= uVar9) {
      GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
      goto LAB_0453142c;
    }
    psVar6 = (string *)FUN_04528df0(uVar7,uVar9);
    cVar4 = PlayerInfo::GetLevelCompleted(this_00,psVar6);
    uVar10 = uVar9 + 1;
  } while (cVar4 != '\0');
  if ((int)uVar9 == 0) {
    this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    psVar6 = (string *)FUN_04528df0(DAT_06b0ff60,uVar9);
    this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)WorldDataManager::FindEventByLevelName(this_01,psVar6);
    uVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_02);
    uVar8 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this_02);
    PlayerInfo::SetWorldMapEventStatus(this_00,uVar7,uVar8,2,1);
    ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(3);
  }
  pGVar1 = gGameStateMgr;
  uVar7 = FUN_04528df0(DAT_06b0ff60,uVar9);
  GameStateMgr::StartLevel(pGVar1,&DAT_06b0fd18,uVar7,0xffffffff,0,6,0);
LAB_0453142c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


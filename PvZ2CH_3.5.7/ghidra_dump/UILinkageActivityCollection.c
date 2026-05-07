// Class: UILinkageActivityCollection


/* UILinkageActivityCollection::UILinkageActivityCollection() */

void __thiscall
UILinkageActivityCollection::UILinkageActivityCollection(UILinkageActivityCollection *this)

{
  UIActivityCollection::UIActivityCollection((UIActivityCollection *)this);
  *(undefined ***)this = &PTR_GetClass_06625ad0;
  *(undefined ***)(this + 0xd8) = &PTR__UILinkageActivityCollection_06625e10;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06625e58;
  return;
}


/* UILinkageActivityCollection::~UILinkageActivityCollection() */

void __thiscall
UILinkageActivityCollection::~UILinkageActivityCollection(UILinkageActivityCollection *this)

{
  *(undefined ***)this = &PTR_GetClass_06625ad0;
  *(undefined ***)(this + 0xd8) = &PTR__UILinkageActivityCollection_06625e10;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06625e58;
  UIActivityCollection::~UIActivityCollection((UIActivityCollection *)this);
  return;
}


/* non-virtual thunk to UILinkageActivityCollection::~UILinkageActivityCollection() */

void __thiscall
UILinkageActivityCollection::~UILinkageActivityCollection(UILinkageActivityCollection *this)

{
  ~UILinkageActivityCollection(this + -0xd8);
  return;
}


/* UILinkageActivityCollection::~UILinkageActivityCollection() */

void __thiscall
UILinkageActivityCollection::~UILinkageActivityCollection(UILinkageActivityCollection *this)

{
  ~UILinkageActivityCollection(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UILinkageActivityCollection::~UILinkageActivityCollection() */

void __thiscall
UILinkageActivityCollection::~UILinkageActivityCollection(UILinkageActivityCollection *this)

{
  ~UILinkageActivityCollection(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILinkageActivityCollection::Init() */

void __thiscall UILinkageActivityCollection::Init(UILinkageActivityCollection *this)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined8 local_20 [3];
  long local_8;
  
  local_2c = 0x1c;
  local_28[0] = 0x2a81;
  local_8 = ___stack_chk_guard;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>
            ((map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
              *)(this + 0x120),(pair *)local_20);
  local_2c = 0x1e;
  local_28[0] = 0x2a82;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>
            ((map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
              *)(this + 0x120),(pair *)local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  local_2c = 1;
  local_30 = L'⪆';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)local_28,&local_30,(wchar_t *)&local_2c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20,
             (pair *)local_28);
  local_2c = 1;
  local_30 = L'⩓';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)local_28,&local_30,(wchar_t *)&local_2c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20,
             (pair *)local_28);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)local_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILinkageActivityCollection::CheckActivityOpenAtLeastOne() */

void UILinkageActivityCollection::CheckActivityOpenAtLeastOne(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  undefined8 local_b0;
  undefined8 local_a8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a0 [24];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a0);
  local_a8._0_4_ = 0x2a81;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8 = CONCAT44(local_a8._4_4_,0x2a82);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_a0);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_a0);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (!(bool)bVar2) {
LAB_03424050:
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_a0);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    puVar4 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    Sexy::OutputDebugStrF
              ((wchar_t *)"CheckActivityOpenAtLeastOne id:%d op:%d",(ulong)*puVar4,(ulong)local_70);
    cVar1 = FUN_0341e954(local_80);
    if ((cVar1 != '\0') && (local_70 != 0)) {
      ActiveItem::~ActiveItem(aAStack_88);
      bVar2 = local_70;
      goto LAB_03424050;
    }
    ActiveItem::~ActiveItem(aAStack_88);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_b0);
  } while( true );
}


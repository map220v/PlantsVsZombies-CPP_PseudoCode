// Class: RenderQueue


/* RenderQueue::~RenderQueue() */

void __thiscall RenderQueue::~RenderQueue(RenderQueue *this)

{
  std::vector<RenderItem,std::allocator<RenderItem>>::~vector
            ((vector<RenderItem,std::allocator<RenderItem>> *)(this + 8));
  return;
}


/* RenderQueue::RenderQueue(int) */

void __thiscall RenderQueue::RenderQueue(RenderQueue *this,int param_1)

{
  *this = (RenderQueue)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<RenderItem,std::allocator<RenderItem>>::reserve
            ((vector<RenderItem,std::allocator<RenderItem>> *)(this + 8),(long)param_1);
  return;
}


/* RenderQueue::Add(int, Sexy::Delegate1<Sexy::Graphics*>) */

void __thiscall RenderQueue::Add(RenderQueue *this,undefined4 param_1,Delegate2 *param_3)

{
  long lVar1;
  Delegate2<Sexy::IPurchaseDriver*,bool> *this_00;
  undefined8 uVar2;
  
  lVar1 = FUN_03b7ec2c(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  std::vector<RenderItem,std::allocator<RenderItem>>::resize
            ((vector<RenderItem,std::allocator<RenderItem>> *)(this + 8),lVar1 + 1);
  uVar2 = *(undefined8 *)(this + 8);
  lVar1 = FUN_03b7ec2c(uVar2,*(undefined8 *)(this + 0x10));
  this_00 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)FUN_03b7ec4c(uVar2,lVar1 + -1);
  *(undefined4 *)(this_00 + 0x30) = param_1;
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(this_00,param_3);
  return;
}


/* RenderQueue::GetSortedQueue() */

RenderQueue * __thiscall RenderQueue::GetSortedQueue(RenderQueue *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*this == (RenderQueue)0x0) {
    uVar1 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 8));
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 8));
    std::
    sort<__gnu_cxx::__normal_iterator<RenderItem*,std::vector<RenderItem,std::allocator<RenderItem>>>,bool(*)(RenderItem_const&,RenderItem_const&)>
              (uVar1,uVar2,RenderItemSortFunc);
    *this = (RenderQueue)0x1;
  }
  return this + 8;
}


// Class: Sexy::BaseResStreamsDriver


/* Sexy::BaseResStreamsDriver::GetGPUResource() */

undefined8 __thiscall Sexy::BaseResStreamsDriver::GetGPUResource(BaseResStreamsDriver *this)

{
  return *(undefined8 *)(this + 0x1a8);
}


/* Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete() */

undefined4 __thiscall
Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete(BaseResStreamsDriver *this)

{
  return *(undefined4 *)(this + 0x10);
}


/* Sexy::BaseResStreamsDriver::GetDecompressedSize() */

undefined4 __thiscall Sexy::BaseResStreamsDriver::GetDecompressedSize(BaseResStreamsDriver *this)

{
  return *(undefined4 *)(this + 0x14);
}


/* Sexy::BaseResStreamsDriver::AreReadAndDecompressBuffersUnified() */

undefined8 Sexy::BaseResStreamsDriver::AreReadAndDecompressBuffersUnified(void)

{
  return 0;
}


/* Sexy::BaseResStreamsDriver::GetReadBufferSize() */

undefined8 Sexy::BaseResStreamsDriver::GetReadBufferSize(void)

{
  return 0x4000;
}


/* Sexy::BaseResStreamsDriver::GetDecompressBufferSize() */

undefined8 Sexy::BaseResStreamsDriver::GetDecompressBufferSize(void)

{
  return 0x10000;
}


/* Sexy::BaseResStreamsDriver::GetReadBufferCount() */

undefined8 Sexy::BaseResStreamsDriver::GetReadBufferCount(void)

{
  return 2;
}


/* Sexy::BaseResStreamsDriver::GetDecompressBufferCount() */

undefined8 Sexy::BaseResStreamsDriver::GetDecompressBufferCount(void)

{
  return 2;
}


/* Sexy::BaseResStreamsDriver::GetGPUTileSizeForTexture(Sexy::ResStreamTextureDescriptor*) const */

ulong __thiscall
Sexy::BaseResStreamsDriver::GetGPUTileSizeForTexture
          (BaseResStreamsDriver *this,ResStreamTextureDescriptor *param_1)

{
  uint uVar1;
  
  if (param_1 != (ResStreamTextureDescriptor *)0x0) {
    switch(*(undefined4 *)(param_1 + 0xc)) {
    case 1:
    case 2:
    case 3:
      return 4;
    case 0x15:
    case 0x16:
    case 0x17:
      return 0x800;
    case 0x1e:
      return (ulong)(*(uint *)(param_1 + 8) >> 1) & 0x1fffffff;
    case 0x1f:
      return (ulong)(*(uint *)(param_1 + 8) >> 2) & 0xfffffff;
    case 0x20:
    case 0x23:
      return (ulong)(uint)(*(int *)(param_1 + 8) * 3) / 6;
    case 0x24:
    case 0x25:
    case 0x27:
      return (ulong)(*(uint *)(param_1 + 8) & 0x3fffffff);
    case 0x26:
      return (ulong)((uint)(*(int *)(param_1 + 8) * 3) >> 2);
    case 0x93:
    case 0x96:
      return 1;
    case 0x94:
      return (ulong)(*(uint *)param_1 >> 1);
    }
    uVar1 = 0;
    if (*(uint *)param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 8) / *(uint *)param_1;
    }
    return (ulong)uVar1;
  }
  return 0x1000;
}


/* Sexy::BaseResStreamsDriver::CreateHoldoverBuffer(unsigned int&) */

BaseBufferResource * __thiscall
Sexy::BaseResStreamsDriver::CreateHoldoverBuffer(BaseResStreamsDriver *this,uint *param_1)

{
  uint uVar1;
  BaseBufferResource *this_00;
  
  uVar1 = (**(code **)(*(long *)this + 0x88))(this,0);
  *param_1 = uVar1;
  this_00 = ::operator_new(0x28);
  BaseBufferResource::BaseBufferResource(this_00,*param_1);
  return this_00;
}


/* Sexy::BaseResStreamsDriver::BeginDecompression(int) */

void __thiscall
Sexy::BaseResStreamsDriver::BeginDecompression(BaseResStreamsDriver *this,int param_1)

{
  this[0xe8] = (BaseResStreamsDriver)0x0;
  *(int *)(this + 8) = param_1;
  if (this[0xeb] == (BaseResStreamsDriver)0x0) {
    *(undefined8 *)(this + 0x130) = 0;
    *(undefined8 *)(this + 0x138) = 0;
    *(undefined8 *)(this + 0x140) = 0;
    inflateInit_(this + 0xf0,"1.2.3",0x70);
    *(undefined8 *)(this + 0xf0) = 0;
    this[0xeb] = (BaseResStreamsDriver)0x1;
    *(undefined4 *)(this + 0xf8) = 0;
    LaunchThread(DecompressionThreadProc,this,4);
  }
  this[0xe9] = (BaseResStreamsDriver)0x1;
  return;
}


/* Sexy::BaseResStreamsDriver::DecompressStream(unsigned char*, unsigned int, unsigned char*,
   unsigned int) */

undefined8 __thiscall
Sexy::BaseResStreamsDriver::DecompressStream
          (BaseResStreamsDriver *this,uchar *param_1,uint param_2,uchar *param_3,uint param_4)

{
  *(uchar **)(this + 0x18) = param_1;
  *(undefined4 *)(this + 0xc) = 1;
  *(uint *)(this + 0x28) = param_2;
  *(uchar **)(this + 0x20) = param_3;
  *(uint *)(this + 0x2c) = param_4;
  this[0xea] = (BaseResStreamsDriver)0x1;
  *(undefined4 *)(this + 0x14) = 0;
  Condition::Notify((Condition *)(this + 0x30));
  return 1;
}


/* Sexy::BaseResStreamsDriver::ContinueDecompressStream(unsigned char*, unsigned int) */

undefined8 __thiscall
Sexy::BaseResStreamsDriver::ContinueDecompressStream
          (BaseResStreamsDriver *this,uchar *param_1,uint param_2)

{
  *(uchar **)(this + 0x20) = param_1;
  *(undefined4 *)(this + 0xc) = 1;
  *(uint *)(this + 0x2c) = param_2;
  *(undefined4 *)(this + 0x14) = 0;
  Condition::Notify((Condition *)(this + 0x30));
  return 1;
}


/* Sexy::BaseResStreamsDriver::IsDecompressionChunkComplete() */

bool __thiscall Sexy::BaseResStreamsDriver::IsDecompressionChunkComplete(BaseResStreamsDriver *this)

{
  return *(int *)(this + 0xc) == 0;
}


/* Sexy::BaseResStreamsDriver::RunDecompressProcess() */

void __thiscall Sexy::BaseResStreamsDriver::RunDecompressProcess(BaseResStreamsDriver *this)

{
  int iVar1;
  
  if (this[0xe9] != (BaseResStreamsDriver)0x0) {
    inflateReset(this + 0xf0);
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined4 *)(this + 0xf8) = 0;
    this[0xe9] = (BaseResStreamsDriver)0x0;
  }
  if (this[0xea] != (BaseResStreamsDriver)0x0) {
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined4 *)(this + 0xf8) = 0;
    this[0xea] = (BaseResStreamsDriver)0x0;
  }
  if (*(int *)(this + 0xc) != 0) {
    if (*(long *)(this + 0xf0) == 0) {
      *(undefined8 *)(this + 0xf0) = *(undefined8 *)(this + 0x18);
      *(undefined4 *)(this + 0xf8) = *(undefined4 *)(this + 0x28);
    }
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x20);
    *(undefined4 *)(this + 0x110) = *(undefined4 *)(this + 0x2c);
    iVar1 = inflate(this + 0xf0,2);
    AtomicSet((int *)(this + 0x14),*(int *)(this + 0x2c) - *(int *)(this + 0x110));
    if (iVar1 != 0) {
      AtomicSet((int *)(this + 0x10),(uint)(iVar1 == 1));
      AtomicSet((int *)(this + 0xc),0);
      return;
    }
    AtomicSet((int *)(this + 0x10),(uint)(*(int *)(this + 0xf8) == 0));
    AtomicSet((int *)(this + 0xc),0);
    return;
  }
  return;
}


/* Sexy::BaseResStreamsDriver::DecompressionThreadProc(void*) */

void Sexy::BaseResStreamsDriver::DecompressionThreadProc(void *param_1)

{
  while (*(char *)((long)param_1 + 0xe8) == '\0') {
    Condition::Wait((Condition *)((long)param_1 + 0x30),5000);
    if (*(char *)(gSexyAppBase + 0x3ad) == '\0') {
      RunDecompressProcess(param_1);
      ResStreamsManager::Update(*(ResStreamsManager **)(gSexyAppBase + 0x908));
    }
  }
  OutputDebugStrF((wchar_t *)"BaseResStreamsDriver::DecompressionThreadProc() exiting.\n");
  Condition::Notify((Condition *)((long)param_1 + 0x8c));
  return;
}


/* Sexy::BaseResStreamsDriver::GetDiskResource() */

undefined8 __thiscall Sexy::BaseResStreamsDriver::GetDiskResource(BaseResStreamsDriver *this)

{
  return *(undefined8 *)(this + 0x1b0);
}


/* Sexy::BaseResStreamsDriver::CreateReadTaskWithoutBuffer(Sexy::IFile*, unsigned char*, unsigned
   int, unsigned int) */

BaseReadWithoutBufferTask * __thiscall
Sexy::BaseResStreamsDriver::CreateReadTaskWithoutBuffer
          (BaseResStreamsDriver *this,IFile *param_1,uchar *param_2,uint param_3,uint param_4)

{
  BaseReadWithoutBufferTask *this_00;
  
  this_00 = BaseReadWithoutBufferTask::operator_new
                      ((BaseReadWithoutBufferTask *)0x50,(ulong)param_1);
  BaseReadWithoutBufferTask::BaseReadWithoutBufferTask(this_00,this,param_1,param_2,param_3,param_4)
  ;
  return this_00;
}


/* Sexy::BaseResStreamsDriver::GetDecompressThreadResource() */

undefined8 __thiscall
Sexy::BaseResStreamsDriver::GetDecompressThreadResource(BaseResStreamsDriver *this)

{
  return *(undefined8 *)(this + 0x1b8);
}


/* Sexy::BaseResStreamsDriver::CreateDecompressTask(Sexy::IResStreamsDriver::TaskResource*,
   Sexy::IResStreamsDriver::Task*) */

BaseDecompressionTask * __thiscall
Sexy::BaseResStreamsDriver::CreateDecompressTask
          (BaseResStreamsDriver *this,TaskResource *param_1,Task *param_2)

{
  uint uVar1;
  BaseDecompressionTask *this_00;
  ulong extraout_x1;
  ulong uVar2;
  ulong extraout_x1_00;
  
  if (*(code **)(*(long *)param_2 + 0x68) == IResStreamsDriver::Task::GetRemainingBytesToDecompress)
  {
    uVar1 = IResStreamsDriver::Task::GetRemainingBytesToDecompress();
    uVar2 = extraout_x1;
  }
  else {
    uVar1 = (**(code **)(*(long *)param_2 + 0x68))(param_2);
    uVar2 = extraout_x1_00;
  }
  this_00 = BaseDecompressionTask::operator_new((BaseDecompressionTask *)0x58,uVar2);
  BaseDecompressionTask::BaseDecompressionTask
            (this_00,this,(BaseDecompressionTask *)param_2,(BaseBufferResource *)param_1,uVar1,false
            );
  return this_00;
}


/* Sexy::BaseResStreamsDriver::CreateDecompressTask(Sexy::IResStreamsDriver::TaskResource*, unsigned
   int, bool) */

BaseDecompressionTask * __thiscall
Sexy::BaseResStreamsDriver::CreateDecompressTask
          (BaseResStreamsDriver *this,TaskResource *param_1,uint param_2,bool param_3)

{
  BaseDecompressionTask *this_00;
  
  this_00 = BaseDecompressionTask::operator_new((BaseDecompressionTask *)0x58,(ulong)param_1);
  BaseDecompressionTask::BaseDecompressionTask
            (this_00,this,(BaseDecompressionTask *)0x0,(BaseBufferResource *)param_1,param_2,param_3
            );
  return this_00;
}


/* Sexy::BaseResStreamsDriver::Align(unsigned int&, int) const */

void __thiscall
Sexy::BaseResStreamsDriver::Align(BaseResStreamsDriver *this,uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar4 = 0;
  if (param_2 != 0) {
    uVar4 = uVar1 / (uint)param_2;
  }
  iVar2 = uVar1 - uVar4 * param_2;
  iVar3 = param_2 - iVar2;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  *param_1 = iVar3 + uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseResStreamsDriver::GetGPUDataSizeForTexture(Sexy::ResStreamTextureDescriptor*) const */

void __thiscall
Sexy::BaseResStreamsDriver::GetGPUDataSizeForTexture
          (BaseResStreamsDriver *this,ResStreamTextureDescriptor *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  long local_8;
  
  uVar2 = *(uint *)param_1;
  local_8 = ___stack_chk_guard;
  uVar3 = *(uint *)(param_1 + 4);
  iVar4 = uVar3 * uVar2;
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0x15:
  case 0x16:
  case 0x17:
    local_c = uVar3;
    Align(this,&local_c,0x20);
    iVar4 = local_c * *(int *)(param_1 + 8);
    break;
  default:
    iVar4 = uVar3 * *(int *)(param_1 + 8);
    break;
  case 0x20:
  case 0x93:
  case 0x96:
    if ((uVar2 & 3) != 0) {
      uVar2 = (uVar2 & 0xfffffffc) + 4;
    }
    if ((uVar3 & 3) != 0) {
      uVar3 = (uVar3 & 0xfffffffc) + 4;
    }
    iVar4 = (int)(uVar2 * uVar3) / 2;
    break;
  case 0x23:
    OutputDebugStrF((wchar_t *)"Note: DXT1 size was never verified but taken from unofficial docs.")
    ;
  case 0x1e:
  case 0x94:
    iVar4 = iVar4 / 2;
    break;
  case 0x24:
  case 0x25:
  case 0x27:
    break;
  case 0x26:
    iVar4 = iVar4 * 3;
  case 0x1f:
    iVar1 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    iVar4 = iVar1 >> 2;
    break;
  case 0x95:
    iVar4 = iVar4 * 4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseResStreamsDriver::GetFileDataSizeForTexture(Sexy::ResStreamTextureDescriptor*) const */

void __thiscall
Sexy::BaseResStreamsDriver::GetFileDataSizeForTexture
          (BaseResStreamsDriver *this,ResStreamTextureDescriptor *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iStack_14;
  int iStack_10;
  int local_c;
  long local_8;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  local_8 = ___stack_chk_guard;
  if (0x92 < uVar1) {
    if (uVar1 < 0x96) {
      iVar2 = (**(code **)(*(long *)this + 0x80))();
      GetAttachedTextureSize(param_1,&iStack_14,&iStack_10,&local_c);
      uVar3 = (ulong)(uint)(iVar2 + local_c);
      goto LAB_053e5104;
    }
    if (uVar1 == 0x96) {
      iVar2 = (**(code **)(*(long *)this + 0x80))();
      uVar3 = (ulong)(uint)(iVar2 << 1);
      goto LAB_053e5104;
    }
  }
  uVar3 = (**(code **)(*(long *)this + 0x80))(this,param_1);
LAB_053e5104:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* Sexy::BaseResStreamsDriver::CreateReadTask(Sexy::IFile*, unsigned int) */

BaseReadIntoBufferTask * __thiscall
Sexy::BaseResStreamsDriver::CreateReadTask(BaseResStreamsDriver *this,IFile *param_1,uint param_2)

{
  BaseReadIntoBufferTask *this_00;
  
  this_00 = BaseReadIntoBufferTask::operator_new((BaseReadIntoBufferTask *)0x48,(ulong)param_1);
  BaseReadIntoBufferTask::BaseReadIntoBufferTask(this_00,this,param_1,param_2);
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseResStreamsDriver::GetFreeReadBuffer() */

void __thiscall Sexy::BaseResStreamsDriver::GetFreeReadBuffer(BaseResStreamsDriver *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  BaseTaskResource *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x160);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    do {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      this_01 = (BaseTaskResource *)*puVar3;
      if (*(code **)(*(long *)this_01 + 0x18) == BaseTaskResource::IsLocked) {
        cVar2 = BaseTaskResource::IsLocked(this_01);
      }
      else {
        cVar2 = (**(code **)(*(long *)this_01 + 0x18))();
      }
      if (cVar2 == '\0') goto LAB_053e5550;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    } while (bVar1);
  }
  this_01 = (BaseTaskResource *)0x0;
LAB_053e5550:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseResStreamsDriver::GetFreeDecompressBuffer() */

void __thiscall Sexy::BaseResStreamsDriver::GetFreeDecompressBuffer(BaseResStreamsDriver *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  BaseTaskResource *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 200) == AreReadAndDecompressBuffersUnified) {
    cVar1 = AreReadAndDecompressBuffersUnified();
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 200))();
  }
  if (cVar1 == '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x178);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar2) {
      do {
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        this_01 = (BaseTaskResource *)*puVar3;
        if (*(code **)(*(long *)this_01 + 0x18) == BaseTaskResource::IsLocked) {
          cVar1 = BaseTaskResource::IsLocked(this_01);
        }
        else {
          cVar1 = (**(code **)(*(long *)this_01 + 0x18))();
        }
        if (cVar1 == '\0') goto LAB_053e5708;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
      } while (bVar2);
    }
    this_01 = (BaseTaskResource *)0x0;
  }
  else {
    this_01 = (BaseTaskResource *)GetFreeReadBuffer(this);
  }
LAB_053e5708:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* Sexy::BaseResStreamsDriver::BaseResStreamsDriver() */

void __thiscall Sexy::BaseResStreamsDriver::BaseResStreamsDriver(BaseResStreamsDriver *this)

{
  IResStreamsDriver::IResStreamsDriver((IResStreamsDriver *)this);
  *(undefined **)this = &DAT_06a37760;
  Condition::Condition((Condition *)(this + 0x30));
  Condition::Condition((Condition *)(this + 0x8c));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 400));
  DriverExtensionSupport::DriverExtensionSupport((DriverExtensionSupport *)(this + 0x1c0));
  *(undefined4 *)(this + 0xc) = 0;
  this[0xeb] = (BaseResStreamsDriver)0x0;
  this[0xea] = (BaseResStreamsDriver)0x1;
  this[0xe9] = (BaseResStreamsDriver)0x1;
  this[0xe8] = (BaseResStreamsDriver)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseResStreamsDriver::~BaseResStreamsDriver() */

void __thiscall Sexy::BaseResStreamsDriver::~BaseResStreamsDriver(BaseResStreamsDriver *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined **)this = &DAT_06a37760;
  *(undefined4 *)(this + 0xc) = 0;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x160);
  this[0xe8] = (BaseResStreamsDriver)0x1;
  this[0xeb] = (BaseResStreamsDriver)0x0;
  Condition::Notify((Condition *)(this + 0x30));
  Condition::Wait((Condition *)(this + 0x8c),1000);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 8))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x178);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::clear(this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_01);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 8))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::clear(this_00);
  if (*(long **)(this + 0x1b8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b8) + 8))();
  }
  if (*(long **)(this + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b0) + 8))();
  }
  if (*(long **)(this + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a8) + 8))();
  }
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::~vector((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 400));
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::~vector(this_01);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::~vector(this_00);
  Condition::~Condition((Condition *)(this + 0x8c));
  Condition::~Condition((Condition *)(this + 0x30));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseResStreamsDriver::~BaseResStreamsDriver() */

void __thiscall Sexy::BaseResStreamsDriver::~BaseResStreamsDriver(BaseResStreamsDriver *this)

{
  ~BaseResStreamsDriver(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseResStreamsDriver::InitWithApp(Sexy::SexyAppBase*) */

void Sexy::BaseResStreamsDriver::InitWithApp(SexyAppBase *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  BaseBufferResource *pBVar5;
  BaseDecompressThreadResource *this;
  BaseDiskResource *this_00;
  BaseGPUResource *this_01;
  int iVar6;
  long lVar7;
  BaseBufferResource *local_10;
  long local_8;
  
  lVar7 = *(long *)param_1;
  local_8 = ___stack_chk_guard;
  if (*(code **)(lVar7 + 0xb8) == GetReadBufferCount) {
    iVar2 = GetReadBufferCount();
  }
  else {
    iVar2 = (**(code **)(lVar7 + 0xb8))();
    lVar7 = *(long *)param_1;
  }
  if (*(code **)(lVar7 + 0xc0) == GetDecompressBufferCount) {
    iVar3 = GetDecompressBufferCount();
  }
  else {
    iVar3 = (**(code **)(lVar7 + 0xc0))(param_1);
    lVar7 = *(long *)param_1;
  }
  if (*(code **)(lVar7 + 200) == AreReadAndDecompressBuffersUnified) {
    cVar1 = AreReadAndDecompressBuffersUnified();
    if (cVar1 != '\0') goto LAB_053e5e2c;
LAB_053e5f28:
    if (0 < iVar2) goto LAB_053e5e3c;
  }
  else {
    cVar1 = (**(code **)(lVar7 + 200))(param_1);
    if (cVar1 == '\0') goto LAB_053e5f28;
LAB_053e5e2c:
    iVar2 = iVar2 + iVar3;
    iVar3 = 0;
    if (iVar2 < 1) goto LAB_053e5eac;
LAB_053e5e3c:
    iVar6 = 0;
    do {
      if (*(code **)(*(long *)param_1 + 0x98) == GetReadBufferSize) {
        uVar4 = GetReadBufferSize();
      }
      else {
        uVar4 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
      }
      iVar6 = iVar6 + 1;
      pBVar5 = ::operator_new(0x28);
      BaseBufferResource::BaseBufferResource(pBVar5,uVar4);
      local_10 = pBVar5;
      std::
      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
      ::push_back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(param_1 + 0x160),(TaskResource **)&local_10);
    } while (iVar6 < iVar2);
  }
  if (0 < iVar3) {
    iVar2 = 0;
    do {
      if (*(code **)(*(long *)param_1 + 0xa0) == GetDecompressBufferSize) {
        uVar4 = GetDecompressBufferSize();
      }
      else {
        uVar4 = (**(code **)(*(long *)param_1 + 0xa0))(param_1);
      }
      iVar2 = iVar2 + 1;
      pBVar5 = ::operator_new(0x28);
      BaseBufferResource::BaseBufferResource(pBVar5,uVar4);
      local_10 = pBVar5;
      std::
      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
      ::push_back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(param_1 + 0x178),(TaskResource **)&local_10);
    } while (iVar2 != iVar3);
  }
LAB_053e5eac:
  this = ::operator_new(0x18);
  BaseDecompressThreadResource::BaseDecompressThreadResource(this);
  *(BaseDecompressThreadResource **)(param_1 + 0x1b8) = this;
  this_00 = ::operator_new(0x18);
  BaseDiskResource::BaseDiskResource(this_00);
  *(BaseDiskResource **)(param_1 + 0x1b0) = this_00;
  this_01 = ::operator_new(0x18);
  BaseGPUResource::BaseGPUResource(this_01);
  *(BaseGPUResource **)(param_1 + 0x1a8) = this_01;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseResStreamsDriver::GetFreeHoldoverBuffer() */

void __thiscall Sexy::BaseResStreamsDriver::GetFreeHoldoverBuffer(BaseResStreamsDriver *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  BaseTaskResource *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 400);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    do {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      this_01 = (BaseTaskResource *)*puVar3;
      if (*(code **)(*(long *)this_01 + 0x18) == BaseTaskResource::IsLocked) {
        cVar2 = BaseTaskResource::IsLocked(this_01);
      }
      else {
        cVar2 = (**(code **)(*(long *)this_01 + 0x18))();
      }
      if (cVar2 == '\0') goto LAB_053e60bc;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    } while (bVar1);
  }
  local_10 = (**(code **)(*(long *)this + 0xd0))(this,(__normal_iterator *)&local_18);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::push_back(this_00,(TaskResource **)&local_10);
  puVar3 = (undefined8 *)
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::back(this_00);
  this_01 = (BaseTaskResource *)*puVar3;
LAB_053e60bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


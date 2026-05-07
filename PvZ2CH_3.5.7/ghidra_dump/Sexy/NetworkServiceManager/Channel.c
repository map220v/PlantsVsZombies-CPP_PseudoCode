// Class: Sexy::NetworkServiceManager::Channel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::NetworkServiceManager::Channel::FreeSlot() */

void __thiscall Sexy::NetworkServiceManager::Channel::FreeSlot(Channel *this)

{
  char cVar1;
  bool bVar2;
  Slot *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) break;
    this_00 = (Slot *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Slot::IsFree(this_00);
    if (cVar1 != '\0') goto LAB_0516d8bc;
    __gnu_cxx::
    __normal_iterator<Sexy::NetworkServiceManager::Slot*,std::vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>>
    ::operator++((__normal_iterator<Sexy::NetworkServiceManager::Slot*,std::vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>>
                  *)&local_18);
  }
  this_00 = (Slot *)0x0;
LAB_0516d8bc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* Sexy::NetworkServiceManager::Channel::Channel() */

void __thiscall Sexy::NetworkServiceManager::Channel::Channel(Channel *this)

{
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* Sexy::NetworkServiceManager::Channel::~Channel() */

void __thiscall Sexy::NetworkServiceManager::Channel::~Channel(Channel *this)

{
  std::vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>::
  ~vector((vector<Sexy::NetworkServiceManager::Slot,std::allocator<Sexy::NetworkServiceManager::Slot>>
           *)(this + 0x10));
  std::list<Sexy::NetworkServiceRequest,std::allocator<Sexy::NetworkServiceRequest>>::~list
            ((list<Sexy::NetworkServiceRequest,std::allocator<Sexy::NetworkServiceRequest>> *)this);
  return;
}


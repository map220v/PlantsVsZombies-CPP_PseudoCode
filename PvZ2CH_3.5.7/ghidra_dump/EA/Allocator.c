// Class: EA::Allocator


/* bool 
   EA::Allocator::TEMPNAMEPLACEHOLDERVALUE(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   const&, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

bool EA::Allocator::operator==(CoreAllocatorAdapter *param_1,CoreAllocatorAdapter *param_2)

{
  if (*(long *)param_1 != *(long *)param_2) {
    return false;
  }
  return *(int *)(param_1 + 8) == *(int *)(param_2 + 8);
}


/* EA::Allocator::TrackedStackFreeFunction(void*, void*) */

void EA::Allocator::TrackedStackFreeFunction(void *param_1,void *param_2)

{
  if (param_1 != (void *)0x0) {
    EATextSquish::ColourFit::~ColourFit(param_1);
    return;
  }
  return;
}


/* EA::Allocator::DefaultStackAllocationFunction(unsigned long, unsigned long*, void*) */

void EA::Allocator::DefaultStackAllocationFunction(ulong param_1,ulong *param_2,void *param_3)

{
  operator_new__(param_1);
  if (param_2 != (ulong *)0x0) {
    *param_2 = param_1;
  }
  return;
}


/* EA::Allocator::DefaultStackFreeFunction(void*, void*) */

void EA::Allocator::DefaultStackFreeFunction(void *param_1,void *param_2)

{
  if (param_1 != (void *)0x0) {
    EATextSquish::ColourFit::~ColourFit(param_1);
    return;
  }
  return;
}


/* EA::Allocator::TrackedStackAllocationFunction(unsigned long, unsigned long*, void*) */

void EA::Allocator::TrackedStackAllocationFunction(ulong param_1,ulong *param_2,void *param_3)

{
  operator_new__(param_1);
  if (param_2 != (ulong *)0x0) {
    *param_2 = param_1;
  }
  return;
}


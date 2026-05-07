// Class: EA::Allocator::detail


/* void EA::Allocator::detail::DeleteObject<EA::Text::Font>(EA::Allocator::ICoreAllocator*,
   EA::Text::Font*) */

void EA::Allocator::detail::DeleteObject<EA::Text::Font>(ICoreAllocator *param_1,Font *param_2)

{
  if (param_2 != (Font *)0x0) {
    (*(code *)**(undefined8 **)param_2)(param_2);
    (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2,0);
  }
  return;
}


/* void 
   EA::Allocator::detail::DeleteObject<EA::Text::EffectsProcessor>(EA::Allocator::ICoreAllocator*,
   EA::Text::EffectsProcessor*) */

void EA::Allocator::detail::DeleteObject<EA::Text::EffectsProcessor>
               (ICoreAllocator *param_1,EffectsProcessor *param_2)

{
  if (param_2 != (EffectsProcessor *)0x0) {
    Text::EffectsProcessor::~EffectsProcessor(param_2);
    (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2,0);
  }
  return;
}


package recastnavigation.core.utils {
	
	import recastnavigation.internal_api.CModule;
	
	public function mallocIntVector(vector:Vector.<int>):int {
		
		var ptr:int = CModule.malloc(4 * vector.length);
		for (var i:int = vector.length; i >= 0; --i) {
			CModule.write32(ptr + 4 * i, vector[i]);
		}
		return ptr;
		
	}
	
}
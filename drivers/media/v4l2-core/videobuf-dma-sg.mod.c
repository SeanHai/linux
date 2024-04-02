#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xea2b701b, "up_read" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xea8c7f8c, "dma_direct_sync_sg_for_cpu" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91185511, "down_read" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x9f555e3e, "vmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xb89588d2, "videobuf_alloc_vb" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xaee0614d, "get_user_pages_longterm" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0xd1ee5e47, "videobuf_queue_core_init" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core";


MODULE_INFO(srcversion, "341D4A72D0572501E562BBF");
MODULE_INFO(rhelversion, "8.0");

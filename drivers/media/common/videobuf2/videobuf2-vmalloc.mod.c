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
	{ 0x689f370d, "frame_vector_to_pages" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0x52e96379, "vb2_destroy_framevec" },
	{ 0x261272bc, "remap_vmalloc_range" },
	{ 0x8ff5c83, "set_page_dirty_lock" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xab31d65a, "vb2_create_framevec" },
	{ 0x30cfb576, "dma_buf_vunmap" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x27e1a049, "printk" },
	{ 0x7cb76ada, "vm_map_ram" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x5666192c, "sg_alloc_table" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x93c5623, "dma_buf_export" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfcdc14d6, "frame_vector_to_pfns" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0xc904d397, "vb2_common_vm_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0x45dbc887, "dma_buf_vmap" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x8a35b432, "sme_me_mask" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-memops";


MODULE_INFO(srcversion, "AFC4BD272B481828B94B149");
MODULE_INFO(rhelversion, "8.0");

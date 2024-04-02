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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x80a72f1a, "bio_alloc_bioset" },
	{ 0xffbf2b72, "blk_put_request" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xfb578fc5, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x13c0d491, "blk_execute_rq_nowait" },
	{ 0xdde3448f, "bio_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1df0f826, "blk_rq_map_kern" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0x423389b5, "bio_map_kern" },
	{ 0x5ba4171c, "blk_execute_rq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x44d14e59, "blk_mq_end_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xce6a1115, "blk_rq_append_bio" },
	{ 0x4c5795ec, "bio_add_pc_page" },
	{ 0xacaf7ca3, "blk_get_request" },
	{ 0x85f5e2aa, "krealloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B4B7EDFECF8613DC50CE7EF");
MODULE_INFO(rhelversion, "8.0");

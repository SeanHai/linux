#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
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
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x27e1a049, "printk" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x46222b59, "async_syndrome_val" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4d180f64, "async_raid6_2data_recov" },
	{ 0xf6e4a62, "async_raid6_datap_recov" },
	{ 0x3352a126, "async_xor" },
	{ 0x9f1492ce, "async_gen_syndrome" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x29361773, "complete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_pq,async_raid6_recov,async_xor";


MODULE_INFO(srcversion, "5174923DCE463F7E550C54A");
MODULE_INFO(rhelversion, "8.0");

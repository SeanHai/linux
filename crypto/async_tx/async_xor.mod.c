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
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4b0c6f2d, "dmaengine_unmap_put" },
	{ 0xfb578fc5, "memset" },
	{ 0xc732a6e6, "async_tx_submit" },
	{ 0x5b6c00e6, "xor_blocks" },
	{ 0xfaea2088, "dmaengine_get_unmap_data" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf6fcf68c, "__async_tx_find_channel" },
	{ 0x2cb6fc9f, "async_tx_quiesce" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x36b3d463, "dma_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_tx,xor";


MODULE_INFO(srcversion, "FA615A56B431CEF07DF5A08");
MODULE_INFO(rhelversion, "8.0");

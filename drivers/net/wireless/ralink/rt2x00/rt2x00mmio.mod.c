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
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1b22130a, "rt2x00lib_dmastart" },
	{ 0x27e1a049, "printk" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xdb1ff350, "rt2x00queue_get_entry" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9331cb39, "rt2x00lib_rxdone" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfeeee363, "rt2x00lib_dmadone" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib";


MODULE_INFO(srcversion, "4E56E599A263E22755195FD");
MODULE_INFO(rhelversion, "8.0");

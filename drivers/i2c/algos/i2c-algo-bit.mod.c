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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0xf7da314, "i2c_add_numbered_adapter" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x760a0f4f, "yield" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "76302B6DEC0D63E7976ADC5");
MODULE_INFO(rhelversion, "8.0");

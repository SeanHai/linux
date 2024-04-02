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
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x177847e, "cpu_info" },
	{ 0x27e1a049, "printk" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xd6b33026, "cpu_khz" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1F21DAC3E3C402B65E97677");
MODULE_INFO(rhelversion, "8.0");

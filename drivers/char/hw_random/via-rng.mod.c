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
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x27e1a049, "printk" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x177847e, "cpu_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00A2*");

MODULE_INFO(srcversion, "1D3F55BFCAB6FF3F1000051");
MODULE_INFO(rhelversion, "8.0");

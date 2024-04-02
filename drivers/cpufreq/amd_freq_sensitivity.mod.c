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
	{ 0x626da5f, "od_unregister_powersave_bias_handler" },
	{ 0xf41588b1, "od_register_powersave_bias_handler" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00E9*");

MODULE_INFO(srcversion, "BF37C4BBFF26049B69BB007");
MODULE_INFO(rhelversion, "8.0");

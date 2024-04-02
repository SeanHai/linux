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
	{ 0x44145519, "crypto_unregister_shash" },
	{ 0xcbb13181, "crypto_register_shash" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x177847e, "cpu_info" },
	{ 0xc06df4fc, "crypto_shash_update" },
	{ 0x27e1a049, "printk" },
	{ 0xec2580fd, "crypto_alloc_shash" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00AA*");

MODULE_INFO(srcversion, "7FFC6E990EF1A62376D9E27");
MODULE_INFO(rhelversion, "8.0");

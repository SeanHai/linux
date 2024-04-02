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
	{ 0xca1da9fc, "nft_unregister_expr" },
	{ 0x5c224ed5, "nft_unregister_obj" },
	{ 0x5974243c, "nft_register_expr" },
	{ 0x6aa9f2aa, "nft_register_obj" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";


MODULE_INFO(srcversion, "C1862ED050A7BE27D9531DA");
MODULE_INFO(rhelversion, "8.0");

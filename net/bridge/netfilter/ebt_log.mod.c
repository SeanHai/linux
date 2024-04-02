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
	{ 0x532b50b1, "xt_unregister_target" },
	{ 0x1f647f51, "xt_register_target" },
	{ 0x7bfde23d, "nf_log_packet" },
	{ 0xde6bbe73, "ipv6_skip_exthdr" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0xed946a48, "init_net" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x27e1a049, "printk" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B244EE18230F346509FC1DF");
MODULE_INFO(rhelversion, "8.0");

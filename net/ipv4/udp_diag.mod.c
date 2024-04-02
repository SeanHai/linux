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
	{ 0xf4949afe, "inet_diag_unregister" },
	{ 0x86670133, "inet_diag_register" },
	{ 0xe210bb56, "inet_diag_bc_sk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x95a67b07, "udp_table" },
	{ 0xd4d1983c, "udplite_table" },
	{ 0x8f8090fa, "__udp6_lib_lookup" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xa592a1a, "sk_free" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0x2d6c275c, "inet_sk_diag_fill" },
	{ 0xcdc4e378, "netlink_net_capable" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xf7998c1e, "sock_diag_check_cookie" },
	{ 0xf11b348, "__udp4_lib_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


MODULE_INFO(srcversion, "613F50E0AE7DE5AF31EC7E9");
MODULE_INFO(rhelversion, "8.0");

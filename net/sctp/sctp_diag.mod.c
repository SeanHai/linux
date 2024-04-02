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
	{ 0x373ba864, "release_sock" },
	{ 0xcbefa254, "sctp_transport_lookup_process" },
	{ 0xf4949afe, "inet_diag_unregister" },
	{ 0x3590bb38, "inet_diag_msg_attrs_fill" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0x8f095d08, "nla_reserve_64bit" },
	{ 0xfba75d08, "inet_diag_msg_common_fill" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5e65ae9f, "sctp_for_each_transport" },
	{ 0xf7998c1e, "sock_diag_check_cookie" },
	{ 0xf60e31a1, "sock_diag_save_cookie" },
	{ 0x2a8f41f6, "nla_reserve" },
	{ 0x86670133, "inet_diag_register" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0x538d3d33, "sctp_get_sctp_info" },
	{ 0x9c1ba11c, "sctp_for_each_endpoint" },
	{ 0xcdc4e378, "netlink_net_capable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sctp,inet_diag";


MODULE_INFO(srcversion, "08B01C1FE012C2DC48848A4");
MODULE_INFO(rhelversion, "8.0");

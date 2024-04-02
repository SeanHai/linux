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
	{ 0x46dbfd47, "l2tp_session_free" },
	{ 0x402b8281, "__request_module" },
	{ 0x92c74da4, "l2tp_tunnel_get_nth" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0x604651e7, "genl_register_family" },
	{ 0x754d539c, "strlen" },
	{ 0x6d859098, "l2tp_tunnel_free" },
	{ 0xaaa60325, "genl_unregister_family" },
	{ 0xba233bca, "l2tp_tunnel_register" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x27e1a049, "printk" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0xe1a20147, "l2tp_tunnel_create" },
	{ 0x8dcc89df, "l2tp_tunnel_get" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xce3ef8ff, "l2tp_session_get_nth" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0xef6dd1d9, "l2tp_session_get_by_ifname" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x454a35d3, "genlmsg_multicast_allns" },
	{ 0x37a0cba, "kfree" },
	{ 0x2809a43b, "genlmsg_put" },
	{ 0x87066b0c, "l2tp_tunnel_delete" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0x458f5c96, "l2tp_session_get" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf1a19428, "l2tp_session_set_header_len" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "7D1E268E294AB1018904731");
MODULE_INFO(rhelversion, "8.0");

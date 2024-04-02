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
	{ 0x1d77b0f8, "unix_socket_table" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xad0f2b6c, "unix_table_lock" },
	{ 0x9d8ed0db, "sock_diag_put_meminfo" },
	{ 0x41ee8ccc, "sock_diag_unregister" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xb29c9658, "sock_i_ino" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xb8a9fc36, "sock_diag_register" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xa88da82, "unix_peer_get" },
	{ 0xa592a1a, "sk_free" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x78d75c6e, "unix_inq_len" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf7998c1e, "sock_diag_check_cookie" },
	{ 0xed59450b, "unix_outq_len" },
	{ 0xf60e31a1, "sock_diag_save_cookie" },
	{ 0x2a8f41f6, "nla_reserve" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0xfe3ac6f4, "__netlink_dump_start" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BC040E8AC50DAC10C3C039C");
MODULE_INFO(rhelversion, "8.0");

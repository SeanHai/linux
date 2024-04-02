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
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x27e1a049, "printk" },
	{ 0x144aeb11, "l2tp_nl_register_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x46dbfd47, "l2tp_session_free" },
	{ 0x50db9c9f, "l2tp_session_delete" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x373ba864, "release_sock" },
	{ 0x47ffa3a4, "kernel_sock_ip_overhead" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0xa4a02131, "register_netdevice" },
	{ 0x9c2e7a83, "l2tp_session_register" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0xdefba5c3, "l2tp_session_create" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xf3ae8ae6, "__secpath_destroy" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xcdf5a3e2, "dev_forward_skb" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x844d765a, "l2tp_xmit_skb" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_netlink,l2tp_core";


MODULE_INFO(srcversion, "0B85748D2731091C851C57B");
MODULE_INFO(rhelversion, "8.0");

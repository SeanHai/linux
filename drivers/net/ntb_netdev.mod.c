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
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0xf9eb813f, "ntb_transport_unregister_client_dev" },
	{ 0xf1a138e1, "ntb_transport_unregister_client" },
	{ 0xe2c8f2d2, "ntb_transport_register_client" },
	{ 0xf55d6313, "ntb_transport_register_client_dev" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x3d54dbfc, "ntb_transport_tx_enqueue" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x32537aca, "ntb_transport_link_query" },
	{ 0xe6478472, "_dev_info" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xec728724, "ntb_transport_create_queue" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x862001f, "ntb_transport_tx_free_entry" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9c992c8f, "ntb_transport_link_up" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xc37d9036, "ntb_transport_rx_remove" },
	{ 0x436098aa, "ntb_transport_link_down" },
	{ 0x30934216, "ntb_transport_max_size" },
	{ 0x5792f848, "strlcpy" },
	{ 0x509f625d, "consume_skb" },
	{ 0xd40e7a02, "ntb_transport_rx_enqueue" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xc270dc24, "ntb_transport_free_queue" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ntb_transport";


MODULE_INFO(srcversion, "A984A22C4CD136F6940C610");
MODULE_INFO(rhelversion, "8.0");

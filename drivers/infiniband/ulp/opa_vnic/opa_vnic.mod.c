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
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x72812a5d, "ib_create_ah_from_wc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x8b8013cc, "ib_find_pkey" },
	{ 0xe9e8c57e, "ib_register_mad_agent" },
	{ 0x406653b8, "ib_free_recv_mad" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x672d3458, "linkwatch_fire_event" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x101557d8, "idr_for_each" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x86efc71c, "ib_free_send_mad" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x9aadd701, "rdma_destroy_ah" },
	{ 0x701843ca, "idr_destroy" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x27e1a049, "printk" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x787b953, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x183a470e, "__skb_get_hash" },
	{ 0xa6aaa67f, "ib_set_client_data" },
	{ 0x6afbc366, "ib_create_send_mad" },
	{ 0x2a0a66d5, "ib_post_send_mad" },
	{ 0x32c5fa9d, "ib_unregister_mad_agent" },
	{ 0x8f5144a6, "ib_register_client" },
	{ 0x537b8cde, "ib_unregister_event_handler" },
	{ 0xe6478472, "_dev_info" },
	{ 0x545cb60b, "ib_register_event_handler" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x41a8670e, "rdma_create_ah" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xc6fd08c8, "eth_commit_mac_addr_change" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0xc215ff46, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0xdf30c245, "idr_find" },
	{ 0x18e7ea17, "ib_unregister_client" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0xea937c72, "dev_set_mtu" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core";


MODULE_INFO(srcversion, "0AA26766381CC01FD875B3A");
MODULE_INFO(rhelversion, "8.0");

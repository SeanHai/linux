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
	{ 0xa4a02131, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xcdf5a3e2, "dev_forward_skb" },
	{ 0x6bdd1509, "dev_mc_unsync" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x307b1368, "dev_get_nest_level" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf6375585, "dev_uc_add" },
	{ 0x913ad17c, "__dev_forward_skb" },
	{ 0xe9ccab1f, "dev_mc_add_excl" },
	{ 0x14ab823, "netdev_rx_handler_register" },
	{ 0xe66f24e5, "dev_uc_add_excl" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x28febc96, "dev_set_allmulti" },
	{ 0xf7151926, "vlan_vid_del" },
	{ 0xe9b75d22, "call_netdevice_notifiers" },
	{ 0x672d3458, "linkwatch_fire_event" },
	{ 0xc171ecf4, "vlan_vid_add" },
	{ 0x37fc13ab, "__netpoll_setup" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xabd938ef, "netif_rx" },
	{ 0xb9d6c40f, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfca44c56, "netif_rx_ni" },
	{ 0xce7d32b3, "dev_set_mac_address" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x44647492, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xcdf34369, "__ethtool_get_link_ksettings" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1827c121, "__netpoll_free_async" },
	{ 0xcf1309ab, "dev_mc_del" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xae95bef, "netdev_upper_dev_unlink" },
	{ 0x92cca204, "ndo_dflt_fdb_dump" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8298d490, "netif_stacked_transfer_operstate" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0xeb84d26a, "__dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x503af334, "eth_header_cache_update" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd1cdac20, "netdev_rx_handler_unregister" },
	{ 0xec8b8e3e, "eth_header_parse" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x9334c63c, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6d87df2a, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0x25e77e8a, "dev_uc_unsync" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x8568cca5, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0xf6f82a1b, "eth_header_cache" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf1fbde49, "dev_uc_del" },
	{ 0x776814c4, "dev_uc_sync" },
	{ 0x121da905, "queue_work_on" },
	{ 0x509f625d, "consume_skb" },
	{ 0x2652b43c, "netdev_update_features" },
	{ 0xf28d28ba, "dev_queue_xmit_accel" },
	{ 0x2d7f1bfe, "netdev_is_rx_handler_busy" },
	{ 0xf1c82d23, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xea937c72, "dev_set_mtu" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2B02D2E4BDECFCE3D195AE0");
MODULE_INFO(rhelversion, "8.0");

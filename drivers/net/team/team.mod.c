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
	{ 0x75fe86ec, "dev_mc_sync_multiple" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x604651e7, "genl_register_family" },
	{ 0x6bdd1509, "dev_mc_unsync" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x754d539c, "strlen" },
	{ 0x98d74ab4, "dev_disable_lro" },
	{ 0xaaa60325, "genl_unregister_family" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x14ab823, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa067c25b, "vlan_uses_dev" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x28febc96, "dev_set_allmulti" },
	{ 0xf7151926, "vlan_vid_del" },
	{ 0xe9b75d22, "call_netdevice_notifiers" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xc171ecf4, "vlan_vid_add" },
	{ 0x37fc13ab, "__netpoll_setup" },
	{ 0x1d675370, "vlan_vids_del_by_dev" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x51850a5c, "vlan_vids_add_by_dev" },
	{ 0xbaef98f3, "netdev_master_upper_dev_link" },
	{ 0xbf605666, "netdev_lower_state_changed" },
	{ 0x6ad0e90d, "netdev_change_features" },
	{ 0xb9d6c40f, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xce7d32b3, "dev_set_mac_address" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x11089ac7, "_ctype" },
	{ 0xcdf34369, "__ethtool_get_link_ksettings" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xae95bef, "netdev_upper_dev_unlink" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xa622d224, "dev_close" },
	{ 0xcd5371ef, "dev_get_by_index" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0xcee69988, "dev_mc_flush" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x67981391, "dev_open" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0xd9120ab1, "dev_uc_flush" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x6ccf6eb0, "netlink_broadcast" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xd1cdac20, "netdev_rx_handler_unregister" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x9334c63c, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0x25e77e8a, "dev_uc_unsync" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x8568cca5, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e690633, "dev_uc_sync_multiple" },
	{ 0x2809a43b, "genlmsg_put" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x509f625d, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0xd81ce50c, "__netpoll_cleanup" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xea937c72, "dev_set_mtu" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B0F8B6D464F046BA7807A81");
MODULE_INFO(rhelversion, "8.0");

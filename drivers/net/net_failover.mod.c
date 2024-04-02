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
	{ 0x75fe86ec, "dev_mc_sync_multiple" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xb9d1be60, "pci_bus_type" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x6bdd1509, "dev_mc_unsync" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa067c25b, "vlan_uses_dev" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf7151926, "vlan_vid_del" },
	{ 0xe9b75d22, "call_netdevice_notifiers" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xc171ecf4, "vlan_vid_add" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1d675370, "vlan_vids_del_by_dev" },
	{ 0x51850a5c, "vlan_vids_add_by_dev" },
	{ 0x707d6012, "failover_register" },
	{ 0xbf605666, "netdev_lower_state_changed" },
	{ 0x6ad0e90d, "netdev_change_features" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xcaff94e5, "netif_tx_stop_all_queues" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xcdf34369, "__ethtool_get_link_ksettings" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa622d224, "dev_close" },
	{ 0x67981391, "dev_open" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9334c63c, "passthru_features_check" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x25e77e8a, "dev_uc_unsync" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x3e690633, "dev_uc_sync_multiple" },
	{ 0x15b9ee1b, "failover_slave_unregister" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xbb6d78ad, "failover_unregister" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x97183961, "dev_get_stats" },
	{ 0xea937c72, "dev_set_mtu" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=failover";


MODULE_INFO(srcversion, "EA0CCFE870FE8D9315D335F");
MODULE_INFO(rhelversion, "8.0");

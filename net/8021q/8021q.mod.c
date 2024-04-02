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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x2eac2566, "mrp_uninit_applicant" },
	{ 0x30e01da4, "dev_change_flags" },
	{ 0xf65c31f7, "vlan_filter_push_vids" },
	{ 0x6bdd1509, "dev_mc_unsync" },
	{ 0x2bd4abc1, "mrp_request_leave" },
	{ 0x1229f179, "vlan_filter_drop_vids" },
	{ 0x7cfa5baf, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x307b1368, "dev_get_nest_level" },
	{ 0x1157f3c0, "proc_create_single_data" },
	{ 0xd7a98822, "garp_uninit_applicant" },
	{ 0xaf273372, "vlan_dev_vlan_id" },
	{ 0xf6375585, "dev_uc_add" },
	{ 0x41715c18, "seq_puts" },
	{ 0xdac5283, "garp_request_join" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa067c25b, "vlan_uses_dev" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x28febc96, "dev_set_allmulti" },
	{ 0xf7151926, "vlan_vid_del" },
	{ 0xe9b75d22, "call_netdevice_notifiers" },
	{ 0x672d3458, "linkwatch_fire_event" },
	{ 0xc171ecf4, "vlan_vid_add" },
	{ 0x37fc13ab, "__netpoll_setup" },
	{ 0xcf73c741, "garp_init_applicant" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xd2c9e900, "proc_remove" },
	{ 0xc38e9eaf, "vlan_ioctl_set" },
	{ 0xb9d6c40f, "netpoll_send_skb_on_dev" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xcdf34369, "__ethtool_get_link_ksettings" },
	{ 0x27e1a049, "printk" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9c8d6db8, "ns_capable" },
	{ 0x1827c121, "__netpoll_free_async" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x19d6bd18, "garp_register_application" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xae95bef, "netdev_upper_dev_unlink" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5def83f9, "skb_push" },
	{ 0x6edf4a5a, "proc_mkdir_data" },
	{ 0x8298d490, "netif_stacked_transfer_operstate" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0xeb84d26a, "__dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf321cc92, "garp_request_leave" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0xe2e018f8, "nla_validate" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xec8b8e3e, "eth_header_parse" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xe75de0b0, "mrp_init_applicant" },
	{ 0x6d87df2a, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2b42dd03, "proc_create_net_data" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0x25e77e8a, "dev_uc_unsync" },
	{ 0xcac1f1ed, "__dev_get_by_name" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x5a719fca, "garp_unregister_application" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x8568cca5, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a557711, "mrp_register_application" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf1fbde49, "dev_uc_del" },
	{ 0x776814c4, "dev_uc_sync" },
	{ 0x28318305, "snprintf" },
	{ 0x2652b43c, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0xa56324fb, "mrp_unregister_application" },
	{ 0x49513643, "mrp_request_join" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf1c82d23, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x97183961, "dev_get_stats" },
	{ 0xea937c72, "dev_set_mtu" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mrp,garp";


MODULE_INFO(srcversion, "A8B97CFA76D6CACD1E0ABCD");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0xd95992d8, "cxgbi_ppm_ppods_reserve" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x244642a2, "__kfree_skb" },
	{ 0x5f27a433, "iscsi_host_remove" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x192a0253, "iscsi_tcp_set_max_r2t" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x56b62201, "cxgbi_ppm_ppod_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa067c25b, "vlan_uses_dev" },
	{ 0x7e583da9, "iscsi_tcp_recv_skb" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe138ab3f, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x48d82af9, "iscsi_unregister_transport" },
	{ 0xbf8c9136, "iscsi_conn_get_addr_param" },
	{ 0xc92e622f, "iscsi_session_teardown" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0x3c1a8888, "iscsi_host_add" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0x8c6b091a, "iscsi_host_alloc" },
	{ 0xa383f7cd, "iscsi_lookup_endpoint" },
	{ 0x6f32895, "iscsi_tcp_r2tpool_free" },
	{ 0xb378c2af, "iscsi_itt_to_ctask" },
	{ 0xf7d6636f, "current_task" },
	{ 0x38b2bac3, "cxgbi_ppm_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xae9c17dc, "iscsi_tcp_r2tpool_alloc" },
	{ 0x7b19ddc5, "iscsi_host_set_param" },
	{ 0x2b7a69d3, "iscsi_host_free" },
	{ 0x68a4204b, "iscsi_suspend_tx" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xc721206f, "iscsi_destroy_endpoint" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0xed946a48, "init_net" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0x367af61c, "iscsi_tcp_conn_setup" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf89c9227, "vlan_dev_real_dev" },
	{ 0xd8197cd5, "ipv6_dev_get_saddr" },
	{ 0x2f6e9a13, "iscsi_set_param" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xeae3f506, "ip6_route_output_flags" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xca09743e, "iscsi_register_transport" },
	{ 0x1f338238, "iscsi_tcp_cleanup_task" },
	{ 0x8e2524c6, "iscsi_conn_queue_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb2230fde, "iscsi_tcp_hdr_recv_prep" },
	{ 0x47d0d1ab, "cxgbi_ppm_release" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x58ace4f3, "iscsi_conn_failure" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x239b0683, "iscsi_create_endpoint" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf0003123, "__ip_dev_find" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x207ba8ad, "iscsi_session_setup" },
	{ 0x2bb0f125, "iscsi_host_get_param" },
	{ 0x1aab669c, "iscsi_conn_bind" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xb3c167f4, "iscsi_tcp_recv_segment_is_hdr" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x5d465d16, "cxgbi_ppm_make_ppod_hdr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcxgb,libiscsi,libiscsi_tcp,scsi_transport_iscsi";


MODULE_INFO(srcversion, "6A6505CF8E75C567AF02A76");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x6fe60ac1, "ipv6_chk_addr" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xaf273372, "vlan_dev_vlan_id" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x91715312, "sprintf" },
	{ 0x90608e48, "qede_rdma_unregister_driver" },
	{ 0x62b7444b, "qed_get_rdma_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xce214081, "ib_get_cached_gid" },
	{ 0x7e53c8ad, "ib_alloc_device" },
	{ 0x5f8155db, "ib_dealloc_device" },
	{ 0x8df939f1, "__neigh_event_send" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0xaf309ec7, "ib_umem_get" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x787b953, "idr_alloc" },
	{ 0xed946a48, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb7852a05, "ib_ud_header_init" },
	{ 0xdc8d485c, "ib_dispatch_event" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x67a9f50e, "qede_rdma_register_driver" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6e949eed, "ib_umem_page_count" },
	{ 0xeae3f506, "ip6_route_output_flags" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3037ddc0, "ib_register_device" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xaa84e77b, "ib_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c173686, "remap_pfn_range" },
	{ 0x4bf4d99d, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2938951, "ib_modify_qp_is_ok" },
	{ 0xf0003123, "__ip_dev_find" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xe9e799fc, "ib_ud_header_pack" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0xce679f95, "pci_enable_atomic_ops_to_root" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdf30c245, "idr_find" },
	{ 0xd1525896, "ib_umem_release" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=qede,qed,ib_core";


MODULE_INFO(srcversion, "B20257198B822D14348D001");
MODULE_INFO(rhelversion, "8.0");

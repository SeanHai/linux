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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x1f0227a4, "kvm_get_kvm" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xe0133920, "mdev_set_drvdata" },
	{ 0x2de4f3f8, "__srcu_read_unlock" },
	{ 0xa4e493c8, "kvm_read_guest" },
	{ 0x5e125fa2, "vfio_unregister_notifier" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x71915288, "mdev_unregister_device" },
	{ 0x9654fd7c, "mdev_dev" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x77ab36bd, "mdev_register_device" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0x8ce8aaa9, "mdev_get_drvdata" },
	{ 0x6c28be5a, "vfio_info_add_capability" },
	{ 0xd4152b12, "vfio_register_notifier" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xf7d6636f, "current_task" },
	{ 0x8623e3ca, "debugfs_create_ulong" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xf9f30127, "kvm_slot_page_track_add_page" },
	{ 0x27e1a049, "printk" },
	{ 0x41aa79da, "vfio_device_get_from_dev" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa7b86a3, "kvm_page_track_unregister_notifier" },
	{ 0x111830a4, "kvm_is_visible_gfn" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x54c99fac, "mem_section" },
	{ 0x6925f6fe, "vfio_unpin_pages" },
	{ 0x1c0419f1, "__srcu_read_lock" },
	{ 0x3ca5181a, "mdev_parent_dev" },
	{ 0xa10fd51b, "use_mm" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4027620c, "kvm_page_track_register_notifier" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd11a8c36, "idr_get_next" },
	{ 0xeef0cb4c, "kvm_slot_page_track_remove_page" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x42f5eeed, "kvm_write_guest" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x113bf45f, "kvm_put_kvm" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c173686, "remap_pfn_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe693fa94, "mdev_from_dev" },
	{ 0xdf8e2fa6, "gfn_to_pfn" },
	{ 0x969c73d9, "vfio_device_put" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x121da905, "queue_work_on" },
	{ 0xadc044b7, "vfio_set_irqs_validate_and_prepare" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x19567d06, "vfio_info_cap_shift" },
	{ 0xf0741fe4, "unuse_mm" },
	{ 0x1d5b728, "vfio_pin_pages" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x11f8a1e0, "gfn_to_memslot" },
	{ 0x85f5e2aa, "krealloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kvm,mdev,vfio";


MODULE_INFO(srcversion, "9022C81DD806EC4C5B72448");
MODULE_INFO(rhelversion, "8.0");

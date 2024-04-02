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
	{ 0x42595e58, "vgacon_text_force" },
	{ 0x99689236, "drm_release" },
	{ 0xd67c0b3c, "drm_fb_helper_set_par" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xec552980, "ttm_bo_eviction_valuable" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xfc5f83af, "ttm_tt_fini" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1b5581f, "drm_crtc_helper_set_config" },
	{ 0x894ad67a, "drm_compat_ioctl" },
	{ 0xc4b397e9, "drm_get_edid" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xbbe63234, "drm_fb_helper_initial_config" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xf2b81b64, "arch_io_reserve_memtype_wc" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x1e67eae8, "drm_mode_config_cleanup" },
	{ 0x4d80de34, "ttm_bo_validate" },
	{ 0x8a5b7e2a, "pcim_iomap" },
	{ 0x3c02e095, "arch_phys_wc_add" },
	{ 0x4ddc6b4, "ttm_bo_init" },
	{ 0xf0eb808a, "drm_helper_probe_single_connector_modes" },
	{ 0x5d7318dc, "drm_global_item_ref" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x999e8297, "vfree" },
	{ 0x8c2d601b, "drm_encoder_init" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34c44bea, "drm_connector_cleanup" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0x53688a1, "drm_fb_helper_unregister_fbi" },
	{ 0x149fa7ec, "drm_fb_helper_pan_display" },
	{ 0xd4071206, "ttm_mem_global_init" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0x84b76159, "drm_helper_connector_dpms" },
	{ 0x5cdcb948, "ttm_mem_global_release" },
	{ 0x1a1bc984, "drm_mode_connector_attach_encoder" },
	{ 0xd3778771, "ttm_bo_unref" },
	{ 0xb9056bb6, "remove_conflicting_framebuffers" },
	{ 0xf10de535, "ioread8" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x5e6bbdf5, "ttm_bo_add_to_lru" },
	{ 0x409efaff, "drm_helper_mode_fill_fb_struct" },
	{ 0x27e1a049, "printk" },
	{ 0x84a2eb94, "drm_put_dev" },
	{ 0x1163a2b9, "drm_gem_handle_create" },
	{ 0xea3478a2, "drm_gem_object_put_unlocked" },
	{ 0xce9d246, "ttm_bo_kmap" },
	{ 0x2fd55eb3, "drm_fb_helper_fill_var" },
	{ 0x1efd7c85, "ttm_tt_init" },
	{ 0xf5ca5eaf, "drm_gem_object_release" },
	{ 0x574e0172, "drm_read" },
	{ 0x1227517a, "ttm_bo_dma_acc_size" },
	{ 0xd74ee6ec, "drm_add_edid_modes" },
	{ 0x283491b2, "ttm_bo_init_mm" },
	{ 0xbe4ac8e, "ttm_bo_device_init" },
	{ 0x1dd71f7a, "drm_err" },
	{ 0xf91b59ed, "drm_connector_init" },
	{ 0x19a52461, "drm_fb_helper_prepare" },
	{ 0x7399d63b, "drm_mode_connector_update_edid_property" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x17c9ae4, "drm_ioctl" },
	{ 0x2b8ed269, "drm_fb_helper_sys_imageblit" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x431bc498, "drm_framebuffer_unregister_private" },
	{ 0xeeec454a, "ttm_bo_del_sub_from_lru" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x89a0514e, "drm_fb_helper_check_var" },
	{ 0x8386939, "drm_fb_helper_blank" },
	{ 0x848d372e, "iowrite8" },
	{ 0xb796aba4, "ttm_bo_kunmap" },
	{ 0xeedd4c41, "drm_get_pci_dev" },
	{ 0xeb411599, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xa1995a5e, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xbe580b94, "drm_fb_helper_alloc_fbi" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfacc03d, "drm_crtc_init" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd1f60a89, "arch_io_free_memtype_wc" },
	{ 0x349f1d8f, "drm_gem_object_init" },
	{ 0x510811ba, "drm_encoder_cleanup" },
	{ 0x4ca4c22d, "ttm_bo_device_release" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xb1bde2ac, "drm_crtc_cleanup" },
	{ 0x509878e7, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7b946331, "ww_mutex_unlock" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0xf2bf1b51, "drm_fb_helper_fini" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0x816a3c16, "i2c_bit_add_bus" },
	{ 0x2d58053b, "drm_fb_helper_sys_fillrect" },
	{ 0x564e1aee, "ttm_bo_global_init" },
	{ 0x6b15573e, "ttm_bo_manager_func" },
	{ 0xd2e0cac7, "drm_helper_disable_unused_functions" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x3f056754, "drm_fb_helper_setcmap" },
	{ 0xc33c7d16, "drm_framebuffer_init" },
	{ 0x7e9561db, "drm_vma_node_is_allowed" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x22233e12, "drm_fb_helper_sys_copyarea" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x1260dd1d, "drm_fb_helper_fill_fix" },
	{ 0x8d7ba67b, "drm_connector_register" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0x66ad3cc0, "drm_mode_crtc_set_gamma_size" },
	{ 0x7d19875, "drm_mode_object_find" },
	{ 0x4e8dd264, "ttm_bo_global_release" },
	{ 0x433809fd, "ww_mutex_lock_interruptible" },
	{ 0x36521709, "drm_poll" },
	{ 0x112f1802, "drm_fb_helper_init" },
	{ 0xe484e35f, "ioread32" },
	{ 0x9f0375fb, "drm_fb_helper_single_add_all_connectors" },
	{ 0xce166b33, "drm_open" },
	{ 0xb5540008, "drm_global_item_unref" },
	{ 0x305d9edc, "drm_framebuffer_cleanup" },
	{ 0x4a56c5ef, "ttm_bo_mmap" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper,ttm,i2c-algo-bit";

MODULE_ALIAS("pci:v0000102Bd00000522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000524sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000530sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000532sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000534sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000536sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000538sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3D82A6205CE9710426864B9");
MODULE_INFO(rhelversion, "8.0");

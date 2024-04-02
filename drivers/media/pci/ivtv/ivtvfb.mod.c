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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x33f56f00, "cfb_imageblit" },
	{ 0xfbb38466, "cfb_copyarea" },
	{ 0x7ab497c8, "cfb_fillrect" },
	{ 0xe30d174f, "driver_for_each_device" },
	{ 0x79508c99, "driver_find" },
	{ 0xb9d1be60, "pci_bus_type" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x67067fdb, "ivtv_udma_alloc" },
	{ 0x82b1cf66, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x3c02e095, "arch_phys_wc_add" },
	{ 0xc75946ea, "ivtv_init_on_first_open" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x550ce709, "pat_enabled" },
	{ 0x7e7c9ab8, "ivtv_firmware_check" },
	{ 0xb4cb9948, "unregister_framebuffer" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x37a0cba, "kfree" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x5792f848, "strlcpy" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x14f67530, "ivtv_debug" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x21bd17f8, "ivtv_udma_unmap" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x12f1ff77, "ivtv_udma_prepare" },
	{ 0x3bf4386, "ivtv_udma_setup" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf7d6636f, "current_task" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x300f51f0, "ivtv_vapi_result" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x625383a2, "ivtv_vapi" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ivtv";


MODULE_INFO(srcversion, "E9C4168A46BCA9C11286CDD");
MODULE_INFO(rhelversion, "8.0");

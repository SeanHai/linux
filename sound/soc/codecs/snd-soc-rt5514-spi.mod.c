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
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x36d921fe, "snd_soc_set_runtime_hwparams" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x65f39767, "__spi_register_driver" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xc351790f, "driver_unregister" },
	{ 0x8185c800, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe57587e0, "device_init_wakeup" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1e2cbe9b, "spi_sync" },
	{ 0x1a92fce0, "snd_soc_rtdcom_lookup" },
	{ 0x4ff23c91, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x56902dcc, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf50bbf8, "snd_soc_lookup_component" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb0e9def, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("of:N*T*Crealtek,rt5514");
MODULE_ALIAS("of:N*T*Crealtek,rt5514C*");

MODULE_INFO(srcversion, "4F28198E04B622E1FD49177");
MODULE_INFO(rhelversion, "8.0");
